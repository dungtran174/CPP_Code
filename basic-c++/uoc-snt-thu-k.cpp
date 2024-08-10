#include <bits/stdc++.h>
using namespace std;

int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int ok = 0;
        for(int i = 2; i <= sqrt(n); i++) {
            while(n % i == 0) {
                k--;
                n /= i;
                if(k == 0) {
                    cout << i << endl;
                    ok = 1;
                    break;
                }
            }
        }
        if(n > 1 && k == 1) {
            cout << n << endl;
        }
        else if(!ok) cout << -1 << endl;
    }
}