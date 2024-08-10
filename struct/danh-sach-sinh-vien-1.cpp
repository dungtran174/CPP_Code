#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string ten, lop, ns, ma;
    double gpa;
};
void chuanHoaNS(string &s)
{
    if (s[1] == '/')
        s = '0' + s;
    if (s[4] == '/')
        s.insert(3, "0");
}

int cnt = 1;
void nhap(SinhVien a[], int n)
{   
    for(int i = 0; i < n; i++)
    {
        string tmp = to_string(cnt);
        cnt++;
        a[i].ma = "B20DCCN" + string(3 - tmp.length(), '0') + tmp;
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
        chuanHoaNS(a[i].ns);
    }
}

void in(SinhVien a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].ns << " ";
        cout << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int n;
    cin >> n;
    nhap(ds, n);
    in(ds, n);
    return 0;
}