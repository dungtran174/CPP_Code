#include <bits/stdc++.h>
using namespace std;

char dem[100005];

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        memset(dem, 0, sizeof(dem));
        for(int i = 0; i < s.size(); i++) {
            dem[s[i]]++;
        }
        int check = 0;
        for(int i = 0; i < s.size(); i++) {
            if(dem[s[i]] == 1) {
                cout << s[i];
                check = 1;
                dem[s[i]] = 0;
            }
        }
        if(check == 0) cout << " ";
        cout << endl;
    }
}