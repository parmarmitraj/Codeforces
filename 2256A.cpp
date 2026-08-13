#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];

        sort(a.begin(), a.end());

        int ans = min(a[2]-a[0], a[1]);

        cout << ans << endl;
    }
}