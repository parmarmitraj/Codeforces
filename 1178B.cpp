#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    vector<long long> pref(n, 0), suf(n, 0);

    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1];
        if (s[i] == 'v' && s[i - 1] == 'v')
            pref[i]++;
    }

    for (int i = n - 2; i >= 0; i--) {
        suf[i] = suf[i + 1];
        if (s[i] == 'v' && s[i + 1] == 'v')
            suf[i]++;
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'o')
            ans += pref[i] * suf[i];
    }

    cout << ans << '\n';

    return 0;
}