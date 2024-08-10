#include <bits/stdc++.h>
using namespace std;    

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; getline(cin, s);
        long long sum = 0;
        for(int i = 0; i < s.size(); i++) {
            if(!isdigit(s[i])) s[i] = ' ';
        }
        stringstream ss(s);
        string temp;
        while(ss >> temp) {
            sum += stoll(temp);
        }
        cout << sum << endl;
    }
}