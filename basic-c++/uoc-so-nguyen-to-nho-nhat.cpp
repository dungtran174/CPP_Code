#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n; cin >> n;
    cout << "1 ";
    for(int i = 1; i <= n; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
        else {
            for(int j = 2; j <= i; j++) {
                if(isPrime(j) && i % j == 0) {
                    cout << j << " ";
                    break;
                }
            }
        }
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}