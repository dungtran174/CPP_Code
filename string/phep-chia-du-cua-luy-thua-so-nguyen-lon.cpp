#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll du(string a, ll m) {
    ll sum = 0;
    for(char c : a) {
        sum = sum * 10 + (c - '0');
        sum %= m;
    }
    return sum;
}

ll binpow(ll a, ll b, ll m) {
    ll res = 1;
    while(b) {
        if(b % 2 == 1) {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a;
        ll b, m;
        cin >> a >> b >> m;
        ll x = du(a, m);
        cout << binpow(x, b, m) << endl;
    }
}
