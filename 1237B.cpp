#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n, 0), b(n, 0);

	map<int, int> mp;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]] = i;
	}

	vector<int> c(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> b[i];
		c[mp[b[i]]] = i;
	}

	int mx = c[0];
	int ans = 0;

	for (int i = 1; i < n; i++) {
		if (c[i] < mx) {
			ans++;
		}
		mx = max(mx, c[i]);
	}

	cout << ans << endl;

	return 0;
}