#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) sum += s[i] - '0';
            else sum -= s[i] - '0';
        }
        if (sum % 11 == 0) cout << "1";
        else cout << "0";
        cout << endl;
    }
}