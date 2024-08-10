#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0 && isPrime(i)) {
                cout << i << " ";
                int cnt = 0;
                while(n % i == 0) {
                    n /= i;
                    cnt++;
                }
                cout << cnt << " ";
            }
        }
        if(n > 1) cout << n << " 1";
        cout << endl;
    }
}