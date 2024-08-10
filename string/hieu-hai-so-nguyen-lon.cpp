#include <bits/stdc++.h>
using namespace std;

string Sub(string a, string b) {
    while(a.size() < b.size()) a = '0' + a;
    while(a.size() > b.size()) b = '0' + b;

    bool ok = false;
    if(a < b) {
        a.swap(b);
        ok = true;
    }
    int nho = 0;
    string res = "";
    int len = a.size() - 1;
    for(int i = len; i >= 0; i--) {
        int so = int(a[i] - '0') - int(b[i] - '0') - nho;
        if(so < 0) {
            res = char(so + 10 + '0') + res;
            nho = 1;
        } 
        else {
            res = char(so + '0') + res;
            nho = 0;
        }
    }
    // while(res[0] == '0') res.erase(res.begin());
    // if(ok == true) res = '-' + res;
    return res;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string a, b; cin >> a >> b;
        if(a > b) cout << Sub(a, b) << endl;
        else cout << Sub(b, a) << endl;
    }

}