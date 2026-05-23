#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--){
		long long w, h;
        cin >> w >> h;

        long long area = INT_MIN;
		
        for(int i=0; i<4; i++){
            long long n;
            cin >> n;
            long long mx, mn;
            for(int j=0; j<n; j++){
                int k;
                cin >> k;

                if(j==0) mn=k;
                if(j==n-1) mx=k;
            }

            long long base = mx-mn;
            long long height;

            if(i<=1) height = h;
            else height = w;

            area = max(area, base*height);
        }

        cout << area << endl;

	}
}