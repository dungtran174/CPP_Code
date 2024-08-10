#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    int stt;
    string ma, ten, lop;
    double a, b, c;
};

bool cmp(SinhVien x, SinhVien y)
{
    if(x.ma != y.ma) return x.ma < y.ma;
    return x.stt < y.stt;
}

void nhap(SinhVien &t)
{
    cin >> t.ma;
    scanf("\n");
    getline(cin, t.ten);
    cin >> t.lop >> t.a >> t.b >> t.c;
}

void sap_xep(SinhVien k[], int n)
{
    sort(k, k + n, cmp);
}

void in_ds(SinhVien k[], int n)
{
    for (int i = 0; i < n; i++)
    {
        k[i].stt = i + 1;
        cout << k[i].stt << " " << k[i].ma << " " << k[i].ten << " " << k[i].lop << " ";
        printf("%.1lf %.1lf %.1lf\n", k[i].a, k[i].b, k[i].c);
    }
}
int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}