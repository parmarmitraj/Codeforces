#include <bits/stdc++.h>
using namespace std;

int findXor(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int pref = findXor(a - 1);

        if (pref == b)
            cout << a << endl;
        else if ((pref ^ b) == a)
            cout << a + 2 << endl;
        else
            cout << a + 1 << endl;
    }
}