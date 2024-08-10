#include <bits/stdc++.h>
using namespace std;

struct SV
{
    string ma, ten, lop, email;
};

bool cmp(SV a, SV b)
{
    if (a.lop != b.lop)
        return a.lop < b.lop;
    return a.ma < b.ma;
}

int main()
{
    int n;
    cin >> n;
    struct SV a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].ma;
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].email;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
        cout << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << endl;
}