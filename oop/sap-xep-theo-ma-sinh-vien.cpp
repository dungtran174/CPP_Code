#include <bits/stdc++.h>
using namespace std;
class SinhVien
{
public:
    string masv, ten, lop, mail;
    friend istream &operator>>(istream &in, SinhVien &a)
    {
        cin >> a.masv;
        cin.ignore();
        getline(cin, a.ten);
        cin >> a.lop >> a.mail;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien &a)
    {
        cout << a.masv << " " << a.ten << " " << a.lop << " " << a.mail;
        return out;
    }
};
bool cmp(SinhVien a, SinhVien b)
{
    return a.masv < b.masv;
}
int main()
{
    int n = 0;
    SinhVien a[10000];
    while (cin >> a[n])
    {
        n++;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}