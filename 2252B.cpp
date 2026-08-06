#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c0 = 0, c1 = 0;
    for (char c : s) {
        if (c == '0') c0++;
        else c1++;
    }

    int b0 = 0, b1 = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || s[i] != s[i - 1]) {
            if (s[i] == '0') b0++;
            else b1++;
        }
    }

    int D = c0 - c1;
    int min_ops = 1e9;

    for (int delta = -1; delta <= 1; delta++) {
        if (abs(delta - D) <= 1) {
            int L1 = min(b1, b0 - delta);
            int L0 = L1 + delta;

            if (L0 >= 0 && L1 >= 0) {
                int ops = (c0 - L0) + (c1 - L1);
                min_ops = min(min_ops, ops);
            }
        }
    }

    if (min_ops == 1e9) {
        cout << -1 << "\n";
    } else {
        cout << min_ops << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}