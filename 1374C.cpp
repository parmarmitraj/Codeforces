#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		string s;
		cin >> s;

		long long cost = 0; 
		long long ans = 0; 

		for (int i = 0; i < n; i++)
		{
			if (s[i] == ')')
				cost--;
			else
				cost++; 

			if (cost < 0){
				ans++;
				cost = 0;
			}
		}

		cout << ans << endl;
	}
	return 0;
}