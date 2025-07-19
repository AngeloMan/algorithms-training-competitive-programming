#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, a, b) for (int i=a;i<b;i++)
ll mod = 1000000007;

int main() 
{
	int n,t, i, l, q = 0;
	
	while (true){
	  string s, c;
		cin >> n;	
		if (n == 0) break;
	  cin >> s;
	  s += "+";
	  if (s[0] != '-') s = "+" + s;
	  i = 0, t = 0, l = 1, c = "0";
	  while (i < s.size()){
	      
	      if (s[i] == '+'){
	         if (l)t += stoi(c);
	         else {
	           t -= stoi(c);
	           l = 1;
	         }
	         c = "";
	      }
	      else if (s[i] == '-'){
	         if (l){
	           t += stoi(c);
	           l = 0;
	         }
	         else t -= stoi(c);
	         c = "";
	      }
	      
	      else {
	          c += s[i];
	      }
	      i++;
	  }
	  q++;
	  cout << "Teste "<<q<<endl;
	  cout << t << endl << endl;
	}
	return 0;
}