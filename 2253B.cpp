#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> C, S;
    for(int i = 0; i < n; i++) {
        if(C.empty() || C.back() != a[i]) {
            C.push_back(a[i]);
            S.push_back(1);
        } else {
            S.back()++;
        }
    }

    int B = C.size();
    if(B == 1) {
        cout << 1 << "\n";
        return;
    }

    bool can_add_2 = false;
    for(int i = 0; i < B - 1; i++) {
        if(S[i] >= 2 && S[i+1] >= 2) {
            can_add_2 = true;
            break;
        }
    }

    if(can_add_2) {
        cout << B + 2 << "\n";
    } else {
        bool can_add_1 = false;
        for(int i = 0; i < B; i++) {
            if(S[i] >= 2) {
                if(i < B - 1) {
                    if(i + 2 >= B || C[i] != C[i+2]) {
                        can_add_1 = true;
                        break;
                    }
                }
                if(i > 0) {
                    if(i - 2 < 0 || C[i-2] != C[i]) {
                        can_add_1 = true;
                        break;
                    }
                }
            }
        }
        
        if(can_add_1) {
            cout << B + 1 << "\n";
        } else {
            cout << B << "\n";
        }
    }
}

int main() {
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}