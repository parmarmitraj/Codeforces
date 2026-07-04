#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while (t--){
		int n;
		char c;
		cin >> n >> c; 

		string s;
		cin >> s;

		bool check0 = true;

		for (int i = 0; i < n; i++){
			if (s[i] != c){
				check0 = false;
				break;
			}
		}

		if (check0){
			cout << "0" << endl;
			continue;
		}

		int val1 = -1;
		for (long long i = 2; i <= n; i++){
			bool isPoss = true;
			for (long long j = i; j <= n; j += i){
				if (s[j - 1] != c){
					isPoss = false;
					break;
				}
			}

			if (isPoss){
				val1 = i;
				break;
			}
		}

		if (val1 != -1){
			cout << "1" << endl;
			cout << val1 << endl;
			continue;
		}

		cout << "2" << endl;
		cout << n - 1 << " " << n << endl;
	}

	return 0;
}