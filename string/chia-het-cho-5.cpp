#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();
        int sum = 0, tmp = 1;
        for(int i = n - 1; i >= 0; i--) {
            sum += (s[i] - '0') * tmp;
            tmp *= 2;
            sum %= 10;
            tmp %= 10;
        }
        if(sum % 5 == 0) cout << "Yes";
        else cout << "No";
        cout << endl;
    }   
} 