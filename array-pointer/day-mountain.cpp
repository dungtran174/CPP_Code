#include <bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int l, int r) {
    for(int i = l; i < r; i++) {
        if (a[i] >= a[i+1]) {
            for(int j = i+1; j < r; j++) {
                if (a[j] <= a[j+1]) return false;
            }
        }
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        int l, r;
        cin >> l >> r;
        if(check(a, n, l, r)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}