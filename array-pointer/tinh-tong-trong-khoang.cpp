#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        while(k--) {
            int p, q, sum = 0;
            cin >> p >> q;  
            p--; q--;
            for(int i = p; i <= q; i++) {
                sum += a[i];
            }   
            cout << sum << endl;
        }
    }
}