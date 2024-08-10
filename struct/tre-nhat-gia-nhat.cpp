#include <bits/stdc++.h>
using namespace std;

struct People
{
    string ten, ns;
};

void chuanHoa(string &s)
{
    if (s[1] == '/')
        s = '0' + s;
    if (s[4] == '/')
        s.insert(3, "0");
}

bool cmp(People a, People b)
{
    string n1 = a.ns.substr(6, 4), n2 = b.ns.substr(6, 4);
    string t1 = a.ns.substr(3, 2), t2 = b.ns.substr(3, 2);
    string ng1 = a.ns.substr(0, 2), ng2 = b.ns.substr(0, 2);
    if (n1 != n2)
        return n1 > n2;
    if (t1 != t2)
        return t1 > t2;
    return ng1 > ng2;
}

int main()
{
    int n;
    cin >> n;
    struct People a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].ten;
        cin >> a[i].ns;
        chuanHoa(a[i].ns);
    }
    sort(a, a + n, cmp);
    cout << a[0].ten << endl << a[n - 1].ten;
}
