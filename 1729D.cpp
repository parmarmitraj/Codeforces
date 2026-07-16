#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> x(n), y(n), d(n);

        for (int i = 0; i < n; i++)
            cin >> x[i];

        for (int i = 0; i < n; i++)
            cin >> y[i];

        for (int i = 0; i < n; i++)
            d[i] = y[i] - x[i];

        sort(d.begin(), d.end());

        int i = 0, j = n - 1;
        int ans = 0;

        while (i < j) {
            if (d[i] + d[j] >= 0) {
                ans++;
                i++;
                j--;
            } else {
                i++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}