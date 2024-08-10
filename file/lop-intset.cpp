#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("DATA.in");
    int n, m, x;
    in >> n >> m;
    set<int> s1, s2;
    while(n--) {
        in >> x;
        s1.insert(x);
    }
    while(m--) {
        in >> x;
        s2.insert(x);
    }
    for(auto &x : s1) {
        if(s2.count(x)) cout << x << ' ';
    }
}