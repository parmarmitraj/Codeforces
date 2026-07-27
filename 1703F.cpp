#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        vector<long long> a(n);
        for(auto &it: a){
            cin >> it;
        }

        long long ans=0;
        vector<long long> ind;
        for(long long i=0; i<n; i++){
            if (a[i] >= i + 1) {
                continue;
            }
            ans += (long long)(lower_bound(ind.begin(), ind.end(), a[i]) - ind.begin());
            ind.push_back(i + 1);
        }

        cout << ans << "\n";
    }

    return 0;
}