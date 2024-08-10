#include <bits/stdc++.h>
using namespace std;

set<string> convert(string s) {
    set<string> res;
    string word = "";
    stringstream ss(s);
    while (ss >> word) {
        res.insert(word);
    }
    return res;
}

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        set<string> a = convert(s1);
        set<string> b = convert(s2);
        for (auto x : a) {
            if (b.find(x) == b.end()) {
                cout << x << " ";
            }
        }
        cout << endl;
    }
}