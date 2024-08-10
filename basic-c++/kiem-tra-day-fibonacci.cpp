#include <bits/stdc++.h>
using namespace std;

long long F[100];
void fibo() {
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i < 93; i++) {
        F[i] = F[i-1] + F[i-2];
    }
} 

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        fibo();
        long long a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            bool check = false;
            for(int j = 0; j < 93; j++) {
                if(a[i] == F[j]) {
                    check = true;
                    break;
                }
            }
            if(check) cout << a[i] << " ";
        }
        cout << endl;
    }
}