#include <bits/stdc++.h>
using namespace std;

int chan(int n) {
    int cnt = 0;
    while(n) {
        if(n % 2 == 0) cnt++;
        n /= 10;
    }
    return cnt;
}

int le(int n) {
    int cnt = 0;
    while(n) {
        if(n % 2 != 0) cnt++;
        n /= 10;
    }
    return cnt;
}

int main() {
    int n; cin >> n;
    int sum = 1;
    for(int i = 1; i <= n; i++) {
        sum *= 10;
    }
    int cnt = 1;
    for(int i = sum/10; i < sum; i++) {
        if(chan(i) == le(i)) {
            cout << i << " ";
            cnt++;
            if(cnt % 10 == 1) cout << endl;
        }
        // if(cnt == 10) { cout << endl; cnt = 0}
    }
}