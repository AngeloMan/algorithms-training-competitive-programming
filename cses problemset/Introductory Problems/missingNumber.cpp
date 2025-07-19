#include <iostream>
using namespace std;

int main() 
{	long long n, v, sum = 0;
	cin >> n;
	for (long long i = 0; i < n - 1; i++){
		cin >> v;
		sum += v;
	}
    
	cout << ((1 + n)*n)/2 - sum;
	
  return 0;
}