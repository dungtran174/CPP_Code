#include <bits/stdc++.h>
using namespace std;

int main() {
    // int t; cin >> t;
    // cin.ignore();   
    // while(t--) {
        string s; getline(cin, s);
        int n = s.length();
        for(int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
        }
        vector<string> res;
        string temp;
        stringstream ss(s);
        while(ss >> temp) {
            res.push_back(temp);
        }
        cout << res[res.size()-1];
        for(int i = 0; i < res.size() - 1; i++) {
            cout << res[i][0];
        }
        cout << "@ptit.edu.vn"<< endl;
    }
// }