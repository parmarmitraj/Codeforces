#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, c;
        cin >> n >> c;

        vector<long long> a(n);
        for(auto &it: a)
            cin >> it;
        
        vector<long long> cost(n);
        for(int i=0; i<n; i++){
            cost[i]=a[i]+i+1;
        }

        sort(cost.begin(), cost.end());

        int i=0;
        long long ans=0;

        while(i<n && cost[i]<=c){
            c-=cost[i];
            ans++;
            i++;
        }

        cout << ans << endl;
    }
}