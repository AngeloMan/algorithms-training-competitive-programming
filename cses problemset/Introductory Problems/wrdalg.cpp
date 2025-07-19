#include <iostream>
#include <string> 
using namespace std;

int main() 
{
    long long n;
    string result;
    cin >> n;
    while (n != 1){

       	result += to_string(n) + " ";
      	if (n % 2 == 0) n/=2;
      	else n = (n * 3) + 1;
    }
    result += "1";
    cout << result;
    return 0;
}