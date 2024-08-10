#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();
        int b[26] = {0}, a = 0;
        for(int i = 0; i < n; i++) {
            b[s[i] - 'a']++;
            a = max(a, b[s[i] - 'a']);
        }
        if(a <= (s.size()+1)/2) cout << 1 << endl;
        else cout << 0 << endl;
    } 
}