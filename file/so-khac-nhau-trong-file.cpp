#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in;
    in.open("DATA.in", ios::in);
    int n;
    map<int, int> mp;
    while(in >> n) {
        mp[n]++;
    }
    for(auto i : mp) {
        cout << i.first << " " << i.second << endl;
    }
}