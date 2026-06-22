#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> a_(n);

        for(auto &it: a)
            cin >> it;
        
        for(auto &it: a_)
            cin >> it;
        
        int l=0, r=0;

        for(int i=0; i<n; i++){
            if(a[i]!=a_[i]){
                l=i;
                break;
            }
        }

        for(int i=l; i<n; i++){
            if(a[i]!=a_[i]){
                r=i;
            }
        }

        for(int i=l; i>=1; i--){
            if(a_[i-1]<=a_[i]){
                l=i-1;
            }else{
                break;
            }
        }

        for(int i=r; i<n-1; i++){
            if(a_[i]<=a_[i+1]){
                r=i+1;
            }else{
                break;
            }
        }

        cout << l+1 << " " << r+1 << endl;
    }
}