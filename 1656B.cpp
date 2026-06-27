#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
}

int main() {
    
    int t;
	cin >> t;
    
    next:
	while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        map<ll, bool> mp;
        
        for (auto it : v) {
            mp[it] = true;
        }
        
        for (int i = 0; i < n; i++) {
            if (mp.find(v[i] - k) != mp.end()) {
                cout << "YES" << endl;
                goto next;
            }
        }
        
        cout << "NO" << endl;
	}
}
