#include <bits/stdc++.h>
using namespace std;

struct DN {
    string ma, ten;
    int soLuong;
};

bool cmp(DN a, DN b) {
    if(a.soLuong != b.soLuong) return a.soLuong > b.soLuong;
    return a.ma < b.ma;
}

int main() {
    int n; cin >> n;
    struct DN a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i].ma ;
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].soLuong;    
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) {
        cout << a[i].ma << " " << a[i].ten << " " << a[i].soLuong << endl;
    }
}