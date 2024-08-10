#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int max = -1;
        for(int i = 0; i < s.size(); i++) {
            if(!isdigit(s[i])) s[i] = ' ';
        }
        stringstream ss(s);
        string temp;
        while(ss >> temp) {
            if(stoll(temp) > max) max = stoll(temp);
        }
        cout << max << endl;
    }
}