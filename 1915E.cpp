#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    set<long long> seen;
    
    long long current_prefix_sum = 0;
    bool found = false;
    
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        
        if(i % 2 == 0) {
            current_prefix_sum += x;
        } else {
            current_prefix_sum -= x;
        }
        
        if (current_prefix_sum == 0 || seen.count(current_prefix_sum)) {
            found = true;
        }
        
        seen.insert(current_prefix_sum);
    }
    
    if(found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    // Fast I/O is important because sum of N is up to 2*10^5
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}