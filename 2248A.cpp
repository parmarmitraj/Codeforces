#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int n=s.length();
        string ans="";
        bool one=true;
        bool zero=true;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                if(one){
                    one=false;
                    continue;
                }

                ans+=s[i];
            }else{
                if(zero){
                    zero=false;
                    continue;
                }

                ans+=s[i];
            }
        }

        cout << ans << endl;
    }
}