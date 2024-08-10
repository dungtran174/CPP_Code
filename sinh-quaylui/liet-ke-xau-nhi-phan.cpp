#include <bits/stdc++.h>
using namespace std;

int n, ok = 1, x[100];
void sinh() {
    int i = n;
    while(i >= 1 && x[i] == 1) {
        x[i] = 0;
        i--;
    } 
    if(i == 0) ok = 0;
    else x[i] = 1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) x[i] = 0;
        while(ok) {
            for(int i = 1; i <= n; i++) cout << x[i];
            sinh();
            cout << " ";
        }
        ok = 1;
        cout << endl;
    }
}