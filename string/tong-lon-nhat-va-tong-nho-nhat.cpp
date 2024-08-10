#include <bits/stdc++.h>
using namespace std;

long long change(string s, char a, char b) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == a) {
            s[i] = b;
        }
    }
    return stoll(s);
}

int main() {
    int t; cin >> t;
    while(t--) {
        string str1, str2;
        cin >> str1 >> str2;
        long long min = change(str1, '6', '5') + change(str2, '6', '5');
        long long max = change(str1, '5', '6') + change(str2, '5', '6');
        cout << min << " " << max << endl;
    }
    return 0;
}