#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &it : a)
            cin >> it;

        int ans = a[0];
        int curr = a[0];

        for (int i = 0; i < n - 1; i++) {
            if (abs(a[i]) % 2 == abs(a[i + 1]) % 2) {
                curr = a[i + 1];
            } else {
                curr = max(a[i + 1], curr + a[i + 1]);
            }
            ans = max(ans, curr);
        }

        cout << ans << '\n';
    }

    return 0;
}