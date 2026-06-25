#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, c;
        cin >> n >> c;

        vector<long long> s(n);
        for(auto &it: s)
            cin >> it;
        
        long long l = 1, r = 1e9, ans = -1;

        while (l<=r){
            long long mid = l + (r-l) / 2;
            long long sum_all = 0;

            for(int i=0; i<n; i++){
                sum_all += (s[i] + 2 * mid) * (s[i] + 2 * mid);
                if(sum_all>c) break;
            }

            if(sum_all<=c){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }

        cout << ans << endl;
    }
}