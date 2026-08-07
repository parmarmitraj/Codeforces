#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        bool isPrime=true;
        for(int i=2; i<n+1; i++){
            if((n+1)%i==0){
                isPrime=false;
                break;
            }
        }

        if(isPrime){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}