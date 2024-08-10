#include <bits/stdc++.h>
using namespace std;

int tang_chat(int n) {
    int t = n % 10;
    n /= 10;
    while (n > 0) {
        if (n % 10 >= t) return 0;
        t = n % 10;
        n /= 10;
    }
    return 1;
}

int chu_so_bang_nhau(int n) {
    int t = n % 10;
    n /= 10;
    while (n > 0) {
        if (n % 10 != t) return 0;
        n /= 10;
    }
    return 1;
}

int so_loc_phat(int n) {
    while (n > 0) {
        int t = n % 10;
        if (t != 8 && t != 6) return 0;
        n /= 10;
    }
    return 1;
}

string chi_chua_so(const string& s) {
    string ketQua;
    for(int i = 5; i < s.size(); i++) {
        if(isdigit(s[i])) {
            ketQua += s[i];
        }
    }
    return ketQua;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size(), k, t;
        s = chi_chua_so(s); 
        k = stoi(s.substr(0, 3));
        t = stoi(s.substr(3, 2));
        int so = stoi(s);
        if(tang_chat(so) || (chu_so_bang_nhau(k) && chu_so_bang_nhau(t)) || so_loc_phat(so) ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

