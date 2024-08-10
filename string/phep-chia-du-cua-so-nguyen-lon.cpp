#include <bits/stdc++.h>
using namespace std;

long long chiadu(string a, long long m) {
    long long sum = 0;
    for(char c : a) {
        sum = sum * 10 + (c - '0');
        sum %= m;
    }
    return sum;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string a; long long m;
        cin >> a >> m;
        cout << chiadu(a, m) << endl;
    }
}