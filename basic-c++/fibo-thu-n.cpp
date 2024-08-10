#include <bits/stdc++.h>    
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long f[100];
        f[1] = 1; f[2] = 1;
        for (int i = 3; i <= 92; i++) {
            f[i] = f[i-1] + f[i-2];
        }
        if(n == 1) cout << 1;
        else if(n == 2) cout << 1;
        else {
            cout << f[n];
        }
        cout << endl;
    }
}
 