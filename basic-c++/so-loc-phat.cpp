#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i] != '0' && s[i] != '6' && s[i] != '8') {
                cout << "NO" << endl;
                break;
            }
            else {
                cout << "YES" << endl;
                break;
            }
        }
    }
}