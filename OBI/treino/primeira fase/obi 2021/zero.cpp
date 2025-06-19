#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 0;
    vector <int> nums;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        if (a == 0) nums.pop_back();
        else nums.push_back(a);
      
    }
    int total = 0;
    for (int b: nums) total += b;
    cout << total;
}