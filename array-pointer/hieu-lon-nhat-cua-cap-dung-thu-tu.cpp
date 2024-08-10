#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int maxDiff = -1e9;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                int diff = a[j] - a[i];
                if(diff > maxDiff && diff > 0) {
                    maxDiff = diff;
                }
            }
        }
        if(maxDiff == -1e9) {
            cout << "-1\n";
        } else {
            cout << maxDiff << "\n";
        }
    }
    return 0;
}