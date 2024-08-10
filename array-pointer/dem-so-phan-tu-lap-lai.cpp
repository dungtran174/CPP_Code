#include <bits/stdc++.h>
using namespace std;
int dem[1000001] = {0};
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        int sum = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) dem[a[i]]++;
        for(int i = 0; i < n; i++) {
            if(dem[a[i]] > 1) {
                sum += dem[a[i]];
                dem[a[i]] = 0;
            }
        }       
        cout << sum << endl;
        for(int i = 0; i < n; i++) dem[a[i]] = 0;
    }
}