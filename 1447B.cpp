#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
        long long m, n;
        cin >> n >> m;
        
        vector<vector<long long>> a(n, vector<long long>(m));
        long long neg_count = 0;
        long long mn=INT_MAX;
        int zero_flag=-1;
		for (long long i = 0; i < n; i++){
			for (long long j = 0; j < m; j++){
				cin >> a[i][j];
                if(a[i][j]==0) zero_flag=1;
                if(a[i][j]<0) neg_count++;
                if(abs(a[i][j])<mn) mn=abs(a[i][j]);
            }
        }
        
        long long x=0;
        for (long long i = 0; i < n; i++){
            for (long long j = 0; j < m; j++){
                x+=abs(a[i][j]);
            }
        }

        if(zero_flag==-1){
            if(neg_count%2==1){
                x=x-mn-mn;
            }
        }

        cout << x << endl;
        
    }
}