#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        vector<long long> x(q);

        for(auto &it: a)
            cin >> it;

        for(auto &it: x)
            cin >> it;
        
        long long prev = 31;
        
		for (int i = 0; i < q; i++) { 
			if (x[i] >= prev) continue;

			long long val = pow(2, x[i]);

			for (int j = 0; j < n; j++) { 
				if (a[j] % val == 0) {
					a[j] += (val / 2);
				}
			}

			prev = x[i];
		}

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }

        cout << endl;
    }
}