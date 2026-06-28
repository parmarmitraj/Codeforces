#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    if (cin >> t){
        while (t--){
            int n;
            cin >> n;

            vector<int> p(n + 1);
            vector<int> depth(n + 1, 0);
            vector<int> max_sub(n + 1, 0);
            vector<int> m1(n + 1, 0);
            vector<int> m2(n + 1, 0);

            depth[1] = 0;
            max_sub[1] = 0;

            for (int i = 2; i <= n; ++i){
                cin >> p[i];
                depth[i] = depth[p[i]] + 1;
                max_sub[i] = depth[i];
            }

            for (int i = n; i >= 2; --i){
                int parent = p[i];
                int child_max = max_sub[i];

                if (child_max > m1[parent]){
                    m2[parent] = m1[parent];
                    m1[parent] = child_max;
                }else if (child_max > m2[parent]){
                    m2[parent] = child_max;
                }

                if (child_max > max_sub[parent]){
                    max_sub[parent] = child_max;
                }
            }

            long long total_guilds = n;

            for (int i = 1; i <= n; ++i){
                total_guilds += max(0, m2[i] - depth[i]);
            }

            cout << total_guilds << "\n";
        }
    }
    return 0;
}