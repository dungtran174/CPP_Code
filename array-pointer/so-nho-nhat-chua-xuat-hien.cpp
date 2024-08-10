#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n); 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end()); 
        int min = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] > min) {
                break; 
            }
            if (a[i] == min) {
                min++;
            }
        }
        cout << min << endl;
    }    
}