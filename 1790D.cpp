#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, int> cnt;

        for (int i = 0; i < n; i++)
            cnt[v[i]]++;

        int ans = 0;

        for (auto it = cnt.begin(); it != cnt.end(); it++) {
            int ele = it->first;
            int fre = it->second;

            ans += max(0, fre - cnt[ele - 1]);
        }

        cout << ans << "\n";
    }

    return 0;
}