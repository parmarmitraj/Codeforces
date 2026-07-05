#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;

        vector<long long> a(n);
        for(auto &it: a)
            cin >> it;

        sort(a.begin(), a.end());

        for(int i = 1; i < n; i++){
            a[i] += a[i - 1];
        }

        long long ans = 0;
        
        for(int i = 0; i < n; i++){
            if(a[i] <= x) {
                long long days = (x - a[i]) / (i + 1) + 1;
                ans += days;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}