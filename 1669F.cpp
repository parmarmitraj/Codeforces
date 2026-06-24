#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> w(n);
        for (auto &it : w)
            cin >> it;
        
        vector<int> pre_sum(n);
        vector<int> suf_sum(n);

        pre_sum[0]=w[0];
        suf_sum[n-1]=w[n-1];

        for(int i=1; i<n; i++){
            pre_sum[i]=pre_sum[i-1]+w[i];
            suf_sum[n-1-i]=suf_sum[n-i]+w[n-1-i];
        }

        int i=0;
        int j=n-1;
        int ans=0;

        while(i<j){
            if(pre_sum[i]==suf_sum[j]){
                ans=i+n-j+1;
                i++;
                j--;
            } else if(pre_sum[i]>suf_sum[j]){
                j--;
            } else if(pre_sum[i]<suf_sum[j]){
                i++;
            }
        }

        cout << ans << endl;
    }
}