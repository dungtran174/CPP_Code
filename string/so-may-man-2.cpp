#include <bits/stdc++.h>
using namespace std;

int tong(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sum(string s) {
    int res = 0;
    for(char x : s) {
        res += x - '0';
    }
    return res;
}
set<int> mm;

void init() {
    mm.insert(9);
    for(int i = 1; i <= 1000; i++) {
        if(mm.find(tong(i)) != mm.end()) {
            mm.insert(i);
        }
    }
}

int main() {
    init();
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();
        int tong = sum(s);
        if(mm.find(tong) != mm.end()) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
}