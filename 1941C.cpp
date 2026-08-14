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

        set<int> c;

        for(int i=0; i<n-2; i++){
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
                c.insert(i+2);
            }

            if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
                c.insert(i);
            }
        }

        cout << c.size() << endl;
    }
}