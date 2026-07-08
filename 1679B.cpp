#include <bits/stdc++.h>
using namespace std;

int main(){    
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    vector<int> time_updated(n, 0); 
    long long sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    
    long long last_type2_val = 0;
    int last_type2_time = -1; 

    for(int current_time = 1; current_time <= q; current_time++){
        int t;
        cin >> t;
        
        if(t == 1){
            long long i, x;
            cin >> i >> x;
            i--; 
            
            long long current_val;
            
            if (time_updated[i] > last_type2_time) {
                current_val = a[i];
            } else {
                current_val = last_type2_val; 
            }
            
            sum = sum - current_val + x;
            a[i] = x;
            time_updated[i] = current_time;
            
        } else {
            long long x;
            cin >> x;
            
            last_type2_val = x;
            last_type2_time = current_time; 
            sum = n * x;
        }

        cout << sum << "\n"; 
    }
    return 0;
}