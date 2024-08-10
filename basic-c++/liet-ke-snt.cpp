#include <bits/stdc++.h>
using namespace std;

void sang(int n, int prime[]) {
    for(int i = 0; i <= n; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(prime[i]) {
            for(int j = i*i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        if(a > b) swap(a, b);
        int prime[b+1];
        sang(b, prime);
        for(int i = a; i <= b; i++) {
            if(prime[i]) cout << i << " ";
        }
        cout << endl;
    }
}