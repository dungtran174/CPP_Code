#include <bits/stdc++.h>
using namespace std;
bool check(string s) {
    string r = s;
    reverse(s.begin(), s.end());
    return s == r;
}

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        string res = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'a' && s[i] <= 'c') {
                res += "2";
            }
            if(s[i] >= 'd' && s[i] <= 'f') {
                res += "3";
            }
            if(s[i] >= 'g' && s[i] <= 'i') {
                res += "4";
            }
            if(s[i] >= 'j' && s[i] <= 'l') {
                res += "5";
            }
            if(s[i] >= 'm' && s[i] <= 'o') {
                res += "6";
            }
            if(s[i] >= 'p' && s[i] <= 's') {
                res += "7";
            }
            if(s[i] >= 't' && s[i] <= 'v') {
                res += "8";
            }
            if(s[i] >= 'w' && s[i] <= 'z') {
                res += "9";
            }
        }
        if(check(res)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        } 
    }
}