#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();
        set<char> se;
        if(s[0] == '0') {
            cout << "INVALID" << endl;
        }
        else {
            int cnt = 0;
            for(int i = 0; i < n; i++) {
                if(!isdigit(s[i])) {
                    cnt++;
                }
                else {
                    se.insert(s[i]);
                }
            }
            if(cnt != 0) {
                cout << "INVALID" << endl;
            }
            else {
                if(se.size() == 10) {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
        }
    }
}