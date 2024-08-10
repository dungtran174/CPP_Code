#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<long long> a;
        int dem = 0;
        for(int i = 0; i < n; i++) {
            long long x; cin >> x;
            if(x > 0) a.push_back(x);
            else if(x == 0) {
                dem++;
            }
        }
        while(dem--) a.push_back(0);
        for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
        cout << endl;
    }
}