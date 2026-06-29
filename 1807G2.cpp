#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &it: a)
            cin >> it;

        long long sum=1;
        bool flag=true;
        sort(a.begin(), a.end());

        for(int i=1; i<n; i++){
            if(a[i]>sum){
                flag=false;
                break;
            }

            sum+=a[i];
        }

        if(a[0]!=1){
            flag=false;
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}