#include <bits/stdc++.h>
using namespace std;

int n, x[100], ok = 1;
void init() {
    cin >> n;
    for(int i = 1; i <= n; i++) x[i] = i;
}

int main() {
    int t; cin >> t;
    while(t--) {  
        init(); 
        do {
            for(int i = 1; i <= n; i++) cout << x[i];
            cout << " ";
        } while(next_permutation(x + 1, x + n + 1));
        cout << endl;
    }
}