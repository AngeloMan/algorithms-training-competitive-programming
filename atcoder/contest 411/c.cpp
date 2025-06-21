#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, q, t = 0, v;
    cin >> n >> q;
    vector <bool> nums(n + 2, false);
    for (int i = 0; i < q; i++){
    	cin >> v;
    	if (nums[v]){
    		nums[v] = false;
    		if (nums[v - 1] || nums[v + 1]){
    			if (nums[v - 1] & nums[v + 1]) t++;	
    		}
    		else t--;
    	}
    	else{
    		nums[v] = true;
    		if (nums[v - 1] || nums[v + 1]){
    			if (nums[v - 1] & nums[v + 1]) t--;	
    		}
    		else t++;
    	}
    	cout << t << "\n";
    	
    }
    return 0;
}
