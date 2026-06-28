#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;

        vector<int> a(n), b(n);

        for(auto &it: a)
            cin >> it;
        
        for(auto &it: b)
            cin >> it;
        
        long long sum_a = 0, sum_b = 0;
        bool no_reorder=true;

        for (int i = 0; i < n; i++) {
            sum_a += a[i];
            sum_b += b[i];
            if (a[i] < b[i]) {
                no_reorder = false;
            }
        }

        long long diff = sum_a - sum_b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool with_reorder = true;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                with_reorder = false;
                break;
            }
        }

        long long ans = -1;

        if (no_reorder) {
            ans = diff;
        }

        if (with_reorder) {
            if (ans == -1 || c + diff < ans) {
                ans = c + diff;
            }
        }

        cout << ans << endl;
    }
}