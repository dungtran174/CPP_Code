#include <bits/stdc++.h>
using namespace std;

char dem[1000001];

int main() {
    int t; cin >> t;
    while(t--) {
        cin.ignore();
        string s; cin >> s;
        int k; cin >> k;
        memset(dem, 0, sizeof(dem));
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z') dem[s[i] - 'a']++;
        }
        bool ok = true;
        for(int i = 0; i < 26; i++) {
            if(dem[i] == 0) {
                k--;
                if(k < 0) {
                    ok = false;
                    break;
                }
            }
        }
        if(ok) cout << 1 << endl;
        else cout << 0 << endl;
    }
}