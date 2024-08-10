#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int n; cin >> n; 
    string a[n]; 
    for(int i = 0; i < n; i++){ 
        cin >> a[i]; 
    } 
    int dem = 0; 
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j<n; j++){ 
            if(i != j && a[i].find(a[j]) != string::npos) dem++; 
        } 
    } 
    cout << dem << endl; 
}