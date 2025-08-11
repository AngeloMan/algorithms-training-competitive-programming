class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
        bool a = false, b = false, c = false;
        long long r = -1e18, t = 0, j, k, l, st = 0, mx = -1e18;
        for (int i = 1; i < nums.size(); ++i){
            if (nums[i - 1] < nums[i]){
                if (!a){
                    a = true;
                    j = i - 1;
                }         
                if (b && !c){
                    c = true;
                    l = i - 1;
                }
                if (!c) t += nums[i - 1];
                if (c){
                    st += nums[i - 1];
                    if (i - l > 2)mx = max(mx, st);
                    else mx = st;
                }
            }
            if (nums[i - 1] > nums[i] && a){
                if (a && !b){
                    b = true;
                    k = i - 1;
                }
                if (c){
                    c = false;
                    if (i - 1 - l > 1) mx = max(st + nums[i - 1], mx);
                    else mx = st + nums[i - 1];
                    while (j <= k - 1){
                        r = max(r, t + mx);
                        t -= nums[j];
                        j++;
                    }
                    t = st;
                    j = l;
                    k = i - 1;
                    st = 0;
                    mx = -1e18;
                }
                t += nums[i - 1];
            }
            if (nums[i] == nums[i - 1]){
                if (a && b && c){
                    a = false; b = false; c = false;
                    if (i - 1 - l > 1) mx = max(st + nums[i - 1], mx);
                    else mx = st + nums[i - 1];
                    while (j <= k - 1){
                        r = max(r, t + mx);
                        t -= nums[j];
                        j++;
                    }
                    t = 0; st = 0;
                }
            }
        }

        if (c){
            st += nums[nums.size() - 1];
            if (nums.size() - 1 - l > 1) mx = max(mx, st);
            else mx = st;
            while (j <= k - 1){
                r = max(r, t + mx);
                t -= nums[j];
                j++;
            }
        }
        return r;
    }
};