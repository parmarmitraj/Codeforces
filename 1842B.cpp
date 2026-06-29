#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> b1(n), b2(n), b3(n);

        for (int i = 0; i < n; i++) cin >> b1[i];
        for (int i = 0; i < n; i++) cin >> b2[i];
        for (int i = 0; i < n; i++) cin >> b3[i];

        int knowlege = 0;
        int i = 0;

        while (i < n && ((b1[i] | x) == x)) {
            knowlege |= b1[i];
            i++;
        }

        int j = 0;
        while (j < n && ((b2[j] | x) == x)) {
            knowlege |= b2[j];
            j++;
        }

        int k = 0;
        while (k < n && ((b3[k] | x) == x)) {
            knowlege |= b3[k];
            k++;
        }

        if (knowlege == x) cout << "Yes\n";
        else cout << "No\n";
    }

}