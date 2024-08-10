#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        char s; cin >> s;
        if(s >= 'A' && s <= 'Z') cout << char(s + 32) << endl;
        else cout << char(s - 32) << endl;
    }
}