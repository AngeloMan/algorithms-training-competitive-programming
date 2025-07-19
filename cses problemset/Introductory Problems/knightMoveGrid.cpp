    #include <iostream>
    #include <vector>
    #include <deque>
    #define v vector
    #define d deque
    using namespace std;

    bool inrange(int v, int l, int h){
        return v >= l && v < h;
    }

    int main() 
    {
        int n, t = 0, crr, a, b;
        cin >> n;
        v <v<int>> mt(n, v<int>(n, - 1));

        d <pair<int, int>> q;
        mt[0][0] = 0;
        q.push_back({0, 0});
        pair <int, int> p;
        while (q.size()){
            p = q[0];
            q.pop_front();
            crr = mt[p.first][p.second];
            a = p.first, b = p.second;
            for (int i = 1; i <= 2; i++){
                for (int j = 1; j <= 2; j++){
                    if (i != j){
                        if (inrange(a + i, 0, n) && inrange(b + j, 0, n) && mt[a + i][b + j] == -1){
                            mt[a + i][b + j] = crr + 1;
                            q.push_back({a + i, b + j});
                        }
                        if (inrange(a - i, 0, n) && inrange(b + j, 0, n) && mt[a - i][b + j] == -1){
                            mt[a - i][b + j] = crr + 1;
                            q.push_back({a - i, b + j});
                        }
                        if (inrange(a + i, 0, n) && inrange(b - j, 0, n) && mt[a + i][b - j] == -1){
                            mt[a + i][b - j] = crr + 1;
                            q.push_back({a + i, b - j});
                        }
                        if (inrange(a - i, 0, n) && inrange(b - j, 0, n) && mt[a - i][b - j] == -1){
                            mt[a - i][b - j] = crr + 1;
                            q.push_back({a - i, b - j});
                        }
                    }
                }
            }
            
        }
        for (v<int> l : mt){
            for (int n : l) cout << n << " ";
            cout << "\n";
        }
        return 0;
    }