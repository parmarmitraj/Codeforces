#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long>& a, int x) {
    int n = a.size();
    vector<long long> b;

    for (int i = 0; i < n; i++) {
        if (a[i] != x) {
            b.push_back(a[i]);
        }
    }

    int m = b.size();
    for (int i = 0; i < m; i++) {
        if (b[i] != b[m - i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool done = false;

        for (int i = 0; i < n; i++) {
            if (a[i] != a[n - i - 1]) {
                if (check(a, a[i]) || check(a, a[n - i - 1])) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
                done = true;
                break;
            }
        }

        if (!done) {
            cout << "YES\n";
        }
    }

    return 0;
}