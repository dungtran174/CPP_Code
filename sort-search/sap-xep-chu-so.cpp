#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll a[n];
        set<ll> s;
        vector<ll> v;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(ll i = 0; i < n; i++) {
            ll m = 0;
            while(a[i] > 0) {
                m = a[i] % 10;
                a[i] /= 10;
                s.insert(m);
            }
        }
        for(auto x : s) {
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(auto x : s) {
            cout << x << " ";
        }
        cout << endl;
    }
}   