#include <bits/stdc++.h>
using namespace std;

struct SV
{
    string ma, ten, lop, mail;
};

int main()
{
    int n;
    cin >> n;
    struct SV a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].ma;
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].mail;
    }
    int t;
    cin >> t;
    scanf("\n");
    while (t--)
    {
        string x;
        getline(cin, x);
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] >= 'a' && x[i] <= 'z')
                x[i] = x[i] - 32;
        }
        cout << "DANH SACH SINH VIEN NGANH " << x << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i].lop[0] == 'E' && (a[i].ma[5] == 'C' || a[i].ma[5] == 'A'))
                continue;
            if (x[0] == a[i].ma[5])
                cout << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].mail << endl;
        }
    }
}