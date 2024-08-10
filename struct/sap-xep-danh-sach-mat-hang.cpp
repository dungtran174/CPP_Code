#include <bits/stdc++.h>
using namespace std;

struct MatHang {
    int ma;
    string ten, hang;
    double lai;
};

bool cmp(MatHang a, MatHang b) {
    if (a.lai != b.lai) return a.lai > b.lai;
    return a.ma < b.ma;
}

int main() {
    int n; cin >> n;
    MatHang a[n];
    double b, c;
    for (int i = 0; i < n; i++) {
        a[i].ma = i + 1;
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].hang);
        cin >> b >> c;
        a[i].lai = c - b;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i].ma << " " << a[i].ten << " " << a[i].hang << " " << fixed << setprecision(2) << a[i].lai << endl;
    }
    return 0;
}
