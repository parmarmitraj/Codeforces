#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

int main(){

    int t;
    cin >> t;
    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;
        long long exp = n * m - (n - r + 1) * (m - c + 1);
        cout << power(2, exp, MOD) << endl;
    }
}