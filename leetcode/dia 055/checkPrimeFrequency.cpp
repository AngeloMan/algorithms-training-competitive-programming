class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        vector <bool> sv(101, true);
        vector <int> fq(101, 0); 
        sv[0] = sv[1] = false;
        for (int i = 4; i < 101; i+= 2){
            sv[i]= false;
        }
        for (int i = 3; i < 101; i += 2){
            if (sv[i]){
                for (int j = i * 3; j < 101; j+= 2 * i){
                    sv[j] = false;
                }
            }
        }

        for (int n: nums){
            fq[n]++;
        }
        for (int i = 0; i < 101; i++){
            if (sv[fq[i]]) return true;
        }
        return false;
    }
};