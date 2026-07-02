#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &it: a){
            cin >> it;
        }

        sort(a.begin(), a.end());

        int ans = 0;

        int i=0, j=n-1; 
        while(i<j){
            ans+=(a[j]-a[i]);
            i++;
            j--;
        }

        cout << ans << endl;
    }
}