#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for(auto& it: a)
            cin >> it;

        for(auto& it: b)
            cin >> it;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long ans=1;
        for(int i=0; i<n; i++){
            int total_smaller = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
            int count = total_smaller - i;

            if(count <= 0){
                ans = 0;
                break;
            }

            ans=(ans*count)%1000000007;
        }

        cout << ans << endl;
    }
}