#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        vector<long long> a(n);
        for(auto &it: a)
            cin >> it;

        for(long long i=0; i<n; i++){
            a[i]=a[i]-i;
        }

        sort(a.begin(), a.end());
        
        long long ans=0;
        long long count=0;
        for(long long i=0; i<n-1; i++){
            if(a[i]==a[i+1]){
                count++;
                continue;
            }

            ans=ans+(count*(count+1)/2);
            count=0;
        }

        ans=ans+(count*(count+1)/2);
        cout << ans << endl;
    }
}