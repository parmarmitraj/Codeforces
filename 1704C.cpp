#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> a(m);
        for(auto &it: a)
            cin >> it;
        
        sort(a.begin(), a.end());

        vector<int> gaps;
		for (int i = 0; i < m - 1; i++) {
			gaps.push_back(a[i + 1] - a[i] - 1);
		}

        gaps.push_back(a[0] + n - a[m - 1] - 1);

		sort(gaps.rbegin(), gaps.rend());
		int numSaved = 0, numDays = 0;

		for (auto gap : gaps) {
			int currGap = gap - numDays * 2;
			if (currGap > 0) {
				numSaved++;
				currGap -= 2;

				if (currGap > 0)
					numSaved += currGap;

				numDays += 2;
			}
		}

		cout << (n - numSaved) << "\n";
    }
}