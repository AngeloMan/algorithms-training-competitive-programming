class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0) c++;
            else if (c > 0) nums[i - c] = nums[i];
        }
        for (int i = 0; i < c; i++){
            nums[nums.size() - 1 - i] = 0;
        }
    }
};
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         // two pointers;
//         int n = nums.size(), i = 0, j = 1;
//         if (n == 1) return;
//         while (j < n){
//             if (nums[i] != 0) i++;
//             if (nums[i] == 0 && nums[j] != 0){
//                 swap(nums[i], nums[j]);
//             }
//             j++;
//         }
//     }
// };