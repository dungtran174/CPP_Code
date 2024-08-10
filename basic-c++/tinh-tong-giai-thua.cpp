#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long sum = 0;
    long long fac = 1;
    for(int i = 1; i <= n; i++) {
        fac *= i;
        sum += fac; 
    }
    cout << sum;
}