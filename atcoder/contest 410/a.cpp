#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, k, a, t = 0;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++){
        cin >> a;
        arr.push_back(a);
    }
    cin >> k;
    for (int v: arr){
        if (v >= k) t++;
    }
    cout << t;
    return 0;
}