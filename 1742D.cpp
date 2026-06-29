#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> max_idx(1005, -1);
        
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            max_idx[x] = i; 
        }

        int ans = -1;

        for (int i = 1; i <= 1000; i++) {
            for (int j = i; j <= 1000; j++) {
                
                if (max_idx[i] != -1 && max_idx[j] != -1) {
                    
                    if (__gcd(i, j) == 1) {
                        ans = max(ans, max_idx[i] + max_idx[j]);
                    }
                }
            }
        }

        cout << ans << "\n";
    }
    
    return 0;
}