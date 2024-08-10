#include <bits/stdc++.h>
using namespace std;

#define n 1000000
bool prime[n+1];
void sang() {
    for (int i = 0; i <= n; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            for (int j = 2*i; j <= n; j += i) prime[j] = false;
        }
    }
}

int main() {
    int t; cin >> t;
    sang();
    while (t--) {
        int a; cin >> a;
        int cnt = 0;
        for(int i = 1; i <= a; i++) {
            if(__gcd(i, a) == 1) cnt++;
        }
        if(prime[cnt]) cout << "1";
        else cout << "0";
        cout << endl;
    }
}