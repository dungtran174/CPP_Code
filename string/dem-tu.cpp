#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        cin.ignore();
        string s;
        int cnt = 0;
        getline(cin, s);
        int n = s.length(); 
        for(int i = 0; i < n; i++) {
            if(s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
                cnt++;
            }
        }
        cout << cnt + 1 << endl;
    }
}