#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int ans=0;
        int i=n-1;

        while (i >= 0 && a[i] == a[n - 1]) {
			i--;
		}

        if (i == -1) {
			cout << 0 << endl;
			continue;
		}

        while(i>=0){
            i -= (n - 1 - i);
            ans++;

            while (i >= 0 && a[i] == a[n - 1]) {
				i--;
			}
        }

        cout << ans << endl;
    }
}