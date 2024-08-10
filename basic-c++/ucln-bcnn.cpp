#include <bits/stdc++.h>
using namespace std;

long long ucln(long long a, long long b) {
    if(b == 0) return a;
    return ucln(b, a%b);
}

long long bcnn(long long a, long long b) {
    return 1ll * a*b/ucln(a, b);
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long a, b; cin >> a >> b;
        cout << bcnn(a, b) << " " << ucln(a, b) << endl;
    }
}