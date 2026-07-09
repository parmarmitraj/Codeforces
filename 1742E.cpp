#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while (t--){
        long long n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (auto &i : a)
            cin >> i;

        vector<long long> queries(q);
        for (auto &i : queries)
            cin >> i;

        vector<long long> queries2 = queries;
        map<long long, long long> mp;

        sort(queries.begin(), queries.end());

        long long l = 0;
        long long sum = 0;

        for (long long i = 0; i < q; i++){
            while (l < n && queries[i] >= a[l]){
                sum += a[l];
                l++;
            }

            mp[queries[i]] = sum;
        }

        for (long long i : queries2){
            cout << mp[i] << " ";
        }

        cout << endl;
    }
}