#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() 
{
    int n, x, a;
    cin >> n >> x;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
    	cin >> a;
    	arr[i] = a;
    }
    int i = 0, j = 0, t = 0, s = 0;
    
    while (j < n){
    	s += arr[j];
    	while (s > x){
    		s -= arr[i];
    		i++;
    	}
    	if (s == x) t++;
    	j++;
    }
    cout << t;
    return 0;
}