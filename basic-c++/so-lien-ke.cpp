#include <bits/stdc++.h>
using namespace std;

bool checkAdjacentDigits(long long n) {
    string s = to_string(n);
    for (int i = 0; i < s.length() - 1; i++) {
        if (abs(s[i] - s[i + 1]) != 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        if (checkAdjacentDigits(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}