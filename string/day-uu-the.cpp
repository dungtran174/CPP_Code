#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        s = " " + s;
        int c = 0, l = 0, sum = 0;
        for(int i = 1; i < s.size(); i++) {
            if(s[i-1] == ' ' && s[i] != ' ') sum++;
            if(s[i] >= '0' && s[i] <= '9') {
                int so = s[i] - '0';
                if(so % 2 == 0) c++;
                else l++;
            }
        }
        if(c > l && sum % 2 == 0) cout << "YES" << endl;
        else if(l > c && sum % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
}