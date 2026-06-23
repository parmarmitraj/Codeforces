#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    next:
    while (t--){
        string s;
        cin >> s;

        int n = (int)s.size();
        set<char> c;
        int k;

        for (k = 0; k < n; k++){
            if (c.find(s[k]) == c.end()){
                c.insert(s[k]);
            }
            else{
                break;
            }
        }

        for (int i = k; i < n; i++){
            if (s[i] != s[i - k]){
                cout << "NO" << endl;
                goto next;
            }
        }
        cout << "YES" << endl;
    }
}
