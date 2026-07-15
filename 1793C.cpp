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

        int l = 0, r = n - 1;
        int mn = 1, mx = n;

        while (l < r) {
            if (a[l] == mn) {
                l++;
                mn++;
            }
            else if (a[l] == mx) {
                l++;
                mx--;
            }
            else if (a[r] == mn) {
                r--;
                mn++;
            }
            else if (a[r] == mx) {
                r--;
                mx--;
            }
            else {
                break;
            }
        }

        if (l >= r)
            cout << -1 << '\n';
        else
            cout << l + 1 << " " << r + 1 << '\n';
    }

    return 0;
}