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

        int ans=1;
        bool asc=false, desc=false;
        for(int i=0; i<n-1; i++){
            if(a[i]<a[i+1] && !asc ){
                ans++;
                asc=true;
                desc=false;
            } else if(a[i]>a[i+1] && !desc ){
                ans++;
                desc=true;
                asc=false;
            }
        }

        cout << ans << "\n";
    }
}