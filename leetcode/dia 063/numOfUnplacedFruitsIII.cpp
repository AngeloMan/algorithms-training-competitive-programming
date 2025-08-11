class Solution {
public:
    int search(int f, int r, vector <int> & st){
        int i = 1;
        while (i < r){
            i *= 2;
            if (st[i] < f) i++;
        }
        return i;
    }

    void update(int i, vector <int> & st){
        st[i] = 0;
        while (i/2 > 0){
            i /= 2;
            st[i] = max(st[2 * i], st[2 * i + 1]);
        }
    }

    int numOfUnplacedFruits(vector<int>& ft, vector<int>& bk) {
        int n = ft.size(), u = 0;
        int r = (1 << (32 - __builtin_clz(n)));
        if (n == r >> 1) r/=2;
        vector <int> st(2 * r);
        for (int i = 0; i < n; i++) st[i + r] = bk[i];
        for (int i = r - 1; i > 0; i--) st[i] = max(st[i*2], st[i*2 + 1]);

        for (int f : ft){
            if (f <= st[1]){
                int i = search(f, r, st);
                update(i, st);

            }
            else u++;
        }
        return u;
    }
};