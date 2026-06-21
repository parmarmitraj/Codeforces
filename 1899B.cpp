#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<long long> v(n);
        for (auto &it : v)
            cin >> it;

        vector<long long> pre(n);
        pre[0] = v[0];
        for (long long i = 1; i < n; i++){
            pre[i] = v[i] + pre[i - 1];
        }

        long long ans = 0;
        for (long long k = 1; k <= n; k++){
            if (n % k)
                continue;
            
            long long start = k - 1;
            long long res = 0;
            long long maxi = pre[start];
            long long mini = pre[start];
            for (long long idx = start + k; idx < n; idx += k){                                             // Iterate over trucks
                long long curr = pre[idx] - pre[idx - k];
                maxi = max(maxi, curr);
                mini = min(mini, curr);
            }
            ans = max(ans, maxi - mini);
        }
        cout << ans << endl;
    }
}
