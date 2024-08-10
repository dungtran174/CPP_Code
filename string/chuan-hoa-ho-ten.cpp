#include <bits/stdc++.h>
using namespace std;

void vietHoa(string &s) {
    for(int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
}

void chuanHoa(string &s) {
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}

int main() {
    string s;
    getline(cin, s);
    vector<string> res;
    string temp = "";
    stringstream ss(s);
    while(ss >> temp) {
        res.push_back(temp);
    }
    for(int i = 0; i < res.size() - 1; i++) {
        chuanHoa(res[i]);
        cout << res[i];
        if(i == res.size() - 2) cout << ", ";
        else cout << " ";
    }
    vietHoa(res[res.size() - 1]);
    cout << res[res.size() - 1];
}