#include <bits/stdc++.h>
using namespace std;

int tongcs(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    while(sum >= 10) {
        int tmp = sum;
        sum = 0;
        while (tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }
    }
    return sum;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << tongcs(n) << endl;
    }
}
