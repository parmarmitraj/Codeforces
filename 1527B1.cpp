#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int c0=0;

        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                c0++;
            }
        }

        if(n%2==0 || n==1){
            cout << "BOB" << endl;
        }else{
            if(s[n/2]=='0'){
                if(c0==1){
                    cout << "BOB" << endl;
                } else if(c0==2){
                    cout << "DRAW" << endl;
                } else{
                    cout << "ALICE" << endl;
                }
            }else{
                cout << "BOB" << endl;
            }
        }
    }
}