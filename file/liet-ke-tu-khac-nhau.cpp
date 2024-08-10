#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("VANBAN.in");
    string s;
    set<string> se;
    while(in >> s) {
        for(int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        se.insert(s);
    }
    for(auto x  : se) {
        cout << x << endl;
    }
}