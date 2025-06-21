#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n, v, t;
	vector <int> nums;
	cin >> n;
	for (int i = 0; i < n; i ++){
		cin >> v;
		nums.push_back(v);
	}
	
	for (int i = 0; i < n - 1; i++){
		t = nums[i];
		cout << t;
		for (int j = i + 1; j < n - 1; j ++){
			t += nums[j];
			cout << " " << t;
		}
		cout << "\n";
	}
	
}