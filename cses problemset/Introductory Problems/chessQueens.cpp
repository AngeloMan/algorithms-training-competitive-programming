#include <iostream>
#include <vector>
#include <string>
using namespace std;

int t = 0;
vector <bool> c(8, false);
vector <bool> d1(15, false);
vector <bool> d2(15, false);

void search(int i, vector<string> mt){
    if (i == 8){
        t++;
        return;
    }
    for (int j = 0; j < 8; j++){
        if (c[j] || d1[i + j] || d2[i - j + 7] || mt[i][j] == '*') continue;
        c[j] = d1[i + j] = d2[i - j + 7] = true;
        search(i + 1, mt);
        c[j] = d1[i + j] = d2[i - j + 7] = false;
    }
}

int main() 
{
    string l;
    vector <string> mt;
    for (int i = 0; i < 8; i ++){
        cin >> l;
        mt.push_back(l);
    }
    search(0, mt);
    cout << t;
    return 0;
}