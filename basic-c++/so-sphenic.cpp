#include <bits/stdc++.h>
using namespace std;

int nt(long long n) {
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            int mu = 0;
            while(n % i == 0) 
            {
                n /= i;
                ++mu;
            }
            if(mu >= 2) return 0;
            ++cnt;
        }
    }
    if(n > 1) ++cnt;
    if(cnt == 3) return 1;  
    else return 0;
}

int main() {
    int t; cin >> t;    
    while(t--) {
        long long n; cin >> n;
        cout << nt(n) << endl;
    }
}

