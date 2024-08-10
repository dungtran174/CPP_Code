#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int x[n+1];
        for(int i = 1; i <= n; i++) cin >> x[i];
        prev_permutation(x+1, x+n+1);
        for(int i = 1; i <= n; i++) cout << x[i] << " ";
        cout << endl;
    }
}