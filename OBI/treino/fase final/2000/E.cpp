#include <bits/stdc++.h>

using namespace std;

bool ir(int i, int l, int j){
	return (i < l && l < j);
}
bool ira(int i, int l, int j){
	return (i <= l && l <= j);
}
int main(){
	int n, a, b, c, d, x, y, z, w, q = 0;
	while (true){
		q++;
		cin >> n;
		if (n == 0) break;
		cin >> a >> b >> c >> d;
		bool ok = true;
		for (int i = 1 ; i < n; i++){
			cin >> x >> y >> z >> w;
			if (ok){
				vector <pair<int, int>> pts1 = {{a,b}, {c,d},{c,b},{a,d}};
				vector <pair <int, int>> pts2 = {{x,y},{z,w},{z,y},{a,w}};
				vector <pair<int, int>> pts3;
				vector <pair<int, int>> final;
				if (ir(a, x, c) && ir(w, b, y)) pts3.push_back({x, b});
				if (ir(a, z, c) && ir(w, b, y)) pts3.push_back({z, b});
				if (ir(a, x, c) && ir(w, d, y)) pts3.push_back({x, d});
				if (ir(a, z, c) && ir(w, d, y)) pts3.push_back({z, d});
				if (ir(x, a, z) && ir(d, y, b)) pts3.push_back({a, y});
				if (ir(x, a, z) && ir(d, w, b)) pts3.push_back({a, w});
				if (ir(x, c, z) && ir(d, y, b)) pts3.push_back({c, y});
				if (ir(x, c, z) && ir(d, w, b)) pts3.push_back({c, w});
				for (auto p: pts1){
					int f = p.first, g = p.second;
					if (ira(x, f, z) && ira(w, g, y)) final.push_back({f, g});
				}
	
				for (auto p: pts2){
					int f = p.first, g = p.second;
					if (ira(a, f, c) && ira(d, g, b)) final.push_back({f, g});
				}
				for (auto p: pts3){
					int f = p.first, g = p.second;
					if (ira(a, f, c) && ira(d, g, b) && ira(x, f, z) && ira(w, g, y)) final.push_back({f, g});
				}
				if (final.size() == 4){
					sort(final.begin(), final.end());
					a = final[1].first, b = final[1].second, c = final[2].first, d = final[2].second;
				}
				else{
					ok = false;
				}
			}	
		}
		cout << "Teste " << q << "\n";
		if (ok) cout << a << " " << b << " " << c << " " << d << "\n\n";
		else cout << "nenhum\n\n";
	}
}