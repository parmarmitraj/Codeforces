#include <bits/stdc++.h>
using namespace std;

bool check(long long mid, vector<long long> a, long long x){
    long long units=0;
    int n=a.size();

    for(int i=0; i<n; i++){
        if(a[i]<mid){
            units += (mid-a[i]);
        }
    }

    return units<=x;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;

        vector<long long> a(n);
        for(auto &it: a)
            cin >> it;
        
        long long l=1, r=1e12, ans=-1;

        while(l<=r){
            long long mid = l + (r-l)/2;
            if(check(mid, a, x)){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }

        cout << ans << endl;
    }
}