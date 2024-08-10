#include <bits/stdc++.h>
using namespace std;

bool isPerfect(long long n) {
    if(n > (long long)1e12) return 0; 
    long long tmp = n;
    if (n % 2 != 0 && n != 1) return false; // Loại bỏ trường hợp số lẻ ngay từ đầu
    long long sum = 1; // Bắt đầu từ 1 vì mọi số đều chia hết cho 1
    double sqrtN = sqrt(n);
    for (long long i = 2; i <= sqrtN; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i; // Thêm ước số đối ứng nếu nó không phải là căn bậc hai của n
        }
    }

    return sum == tmp && n != 1; // Loại trừ 1 vì 1 không phải là số hoàn hảo
}

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        if (isPerfect(n)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}