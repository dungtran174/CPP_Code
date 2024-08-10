#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        multiset<char> ky;
        int sum = 0;
        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                sum += s[i] - '0';
            }
            else {
                ky.insert(s[i]);
            }
        }
        for(auto i : ky) cout << i;
        cout << sum << endl;
    }
}