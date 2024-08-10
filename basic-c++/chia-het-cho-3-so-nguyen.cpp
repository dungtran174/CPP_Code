#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bcnn(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

int main() {
    int t; cin >> t;
    while (t--) {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll bc = bcnn(a, bcnn(b, c));
        ll m = pow(10, n-1);
        ll res = ( m + bc - 1 ) / bc * bc;
        ll k = pow(10, n);
        res < k ? cout << res << endl : cout << -1 << endl;
    }
}