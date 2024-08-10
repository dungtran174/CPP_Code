#include <bits/stdc++.h>
using namespace std;

void tolwr(string &s) {
    for (char &c : s) c = tolower(c);
}

int main() {
    ifstream in1("DATA1.in");
    ifstream in2("DATA2.in");
    set<string> s1, s2, s3;
    string s;
    while (in1 >> s) {
        tolwr(s);
        s1.insert(s);
        s3.insert(s);
    }
    while (in2 >> s) {
        tolwr(s);
        s2.insert(s);
        s3.insert(s);
    }
    for(auto &x : s3) cout << x << ' ';
    cout << endl;
    for(auto &x : s1) {
        if(s2.count(x)) cout << x << ' ';
    }
}