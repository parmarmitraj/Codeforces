#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
const long long INV6 = 166666668;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        long long ans = n % MOD;
        ans = ans * ((n + 1) % MOD) % MOD;
        ans = ans * ((4 * n - 1) % MOD) % MOD;
        ans = ans * INV6 % MOD;
        ans = ans * 2022 % MOD;

        cout << ans << '\n';
    }
}