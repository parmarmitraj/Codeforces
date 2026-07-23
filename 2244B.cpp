#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> arr(n);
        for(long long i=0; i<n; i++){
            cin >> arr[i];
        }

        long long extra = 0;
        bool isValid = true;

        for(long long i=0; i<n; i++){
            long long current = arr[i] + extra;
            long long need = i + 1;

            if(current < need){
                isValid = false;
                break;
            }

            extra = current - need;
        }

        if(isValid){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}