#include <bits/stdc++.h>
using namespace std;

struct DN
{
    string ma, ten;
    int soLuong;
};

bool cmp(DN a, DN b)
{
    if (a.soLuong != b.soLuong)
        return a.soLuong > b.soLuong;
    return a.ma < b.ma;
}

int main()
{
    int n;
    cin >> n;
    struct DN a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].ma;
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].soLuong;
    }
    sort(a, a + n, cmp);
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:" << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i].soLuong >= l && a[i].soLuong <= r)
            {
                cout << a[i].ma << " " << a[i].ten << " " << a[i].soLuong << endl;
            }
        }
    }
}