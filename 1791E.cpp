#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        vector<int> a(n);
        for(auto &it : a)
            cin >> it;
        
        long long ans=0;
        long long c0=0;
        long long sum=0;
        long long neg=0;
        long long mn=INT_MAX;

        for(long long i=0; i<n; i++){
            if(a[i]==0){
                c0++;
            } else if(a[i]<0){
                neg++;
            }

            if(a[i] != 0)
                mn=min(mn, llabs(a[i]));
            
            sum+=llabs(a[i]);
        }

        if(c0>0){
            ans = sum;
        }else{
            if(neg%2==0){
                ans=sum;
            }else{
                ans=sum-2*mn;
            }
        }

        cout << ans << endl;
    }
}