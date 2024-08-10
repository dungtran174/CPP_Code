#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int tang_dan(int n) {
    int temp = n % 10;
    n /= 10;
    while (n > 0) {
        if (n % 10 >= temp) return 0;
        temp = n % 10;
        n /= 10;
    }
    return 1;
}

int giam_dan(int n) {
    int temp = n % 10;
    n /= 10;
    while (n > 0) {
        if (n % 10 <= temp) return 0;
        temp = n % 10;
        n /= 10;
    }
    return 1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, count = 0;
        cin >> n;
        for(int i = pow(10, n - 1); i < pow(10, n); i++) {
            if ((tang_dan(i) || giam_dan(i)) && isPrime(i)) count++;
        }
        cout << count << endl;
    }
    return 0;
}