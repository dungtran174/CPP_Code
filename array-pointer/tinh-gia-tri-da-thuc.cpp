#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        int a[n], mod = 1e9 + 7;
        for (int i = 0; i < n; i++) cin >> a[i];
        long long res = a[0];
        for (int i = 1; i < n; i++) {
            res = res * x + a[i];
            res %= mod;
        }
        cout << res << endl;
    }
}