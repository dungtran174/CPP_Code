#include <bits/stdc++.h>
using namespace std;

struct DS
{
    int stt;
    string ma, ten, lop, email, dn;
};

bool cmp(DS a, DS b)
{
    return a.ma < b.ma;
}

int main()
{
    int n;
    cin >> n;
    DS a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].stt = i + 1;
        cin >> a[i].ma;
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].email >> a[i].dn;
    }
    sort(a, a + n, cmp);
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (a[i].dn == s)
            {
                cout << a[i].stt << " " << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << " " << a[i].dn << endl;
            }
        }
    }
}