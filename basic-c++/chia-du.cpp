#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, ok = 0;
        cin >> a >> b;
        for(int i = 0; i < b; i++) {
            if((a * i ) % b == 1) {
                ok = 1;
                cout << i << endl;
                break;
            }
        }
        if(ok == 0) cout << -1 << endl;
    }
}