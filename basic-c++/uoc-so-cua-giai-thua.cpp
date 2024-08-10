#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
int main(){ 
    int t; cin >> t; 
    while(t--){ 
        int n, p; cin >> n >> p; 
        int cnt = 0; 
        bool check = 0; 
        for(int i=2; i<=n; i++){ 
            int k = i; 
            while(k%p==0){ 
                cnt++;
                check = 1; k/=p; 
            } 
        } 
        if(check) cout << cnt << endl; 
        else cout << "0" << endl; 
    } 
}