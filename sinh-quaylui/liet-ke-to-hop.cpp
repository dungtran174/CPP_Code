#include <bits/stdc++.h>
using namespace std;

int n, k, x[100], ok = 1;

void init() {
    cin >> n >> k;
    for (int i = 1; i <= k; i++) x[i] = i;
}

void quaylui() {
    int i = k;
    while(i > 0 && x[i] == n - k + i) i--;
    if(i == 0) ok = 0;
    else {
        x[i]++;
        for(int j = i + 1; j <= k; j++) {
            x[j] = x[j-1] + 1;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        init();
        while(ok) {
            for(int i = 1; i <= k; i++) cout << x[i];
            quaylui();
            cout << " ";
        }
        ok = 1;
        cout << endl;
    }
}