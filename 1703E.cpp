#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<vector<char>> a(n, vector<char>(n));
        for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		}

        if(n==1){
            cout << "0\n";
            continue;
        }

        int row=0, col=0;
        int ans=0;
        while(row<n){
            col=0;
            while(col<n){
                int c0=0, c1=0;
                if(a[row][col]=='0') c0++;
                else c1++;

                if(a[n-row-1][n-col-1]=='0') c0++;
                else c1++;

                if(a[col][n-row-1]=='0') c0++;
                else c1++;

                if(a[n-col-1][row]=='0') c0++;
                else c1++;

                if ((c0 == 0) or (c1 == 0)){
                    col++;
					continue;
                }

                if (c0 >= c1){
					ans += c1;
					a[row][col] = '0';
					a[col][n - row - 1] = '0';
					a[n - row - 1][n - col - 1] = '0';
					a[n - col - 1][row] = '0';
				}
				else{
					ans += c0;
					a[row][col] = '1';
					a[col][n - row - 1] = '1';
					a[n - row - 1][n - col - 1] = '1';
					a[n - col - 1][row] = '1';
				}

                col++;
            }
            row++;
        }

        cout << ans << "\n";
    }
}