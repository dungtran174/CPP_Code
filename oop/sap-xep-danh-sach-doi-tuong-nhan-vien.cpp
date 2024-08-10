#include <bits/stdc++.h>
using namespace std;
int t = 1;

void chuanHoa(string &s)
{
    if (s[1] == '/')
        s = '0' + s;
    if (s[4] == '/')
        s.insert(3, "0");
}

string xuly(string s)
{
    stringstream ss(s);
    string tmp, res = "";
    while (getline(ss, tmp, '/'))
    {
        res = tmp + res;
    }
    return res;
}

class NhanVien
{
public:
    string ma, ten, gt, ns, dc, thue, hd;
    friend istream &operator>>(istream &in, NhanVien &x)
    {
        string tmp = to_string(t);
        t++;
        x.ma = string(5 - tmp.size(), '0') + tmp;
        scanf("\n");
        getline(in, x.ten);
        in >> x.gt >> x.ns;
        scanf("\n");
        getline(in, x.dc);
        in >> x.thue >> x.hd;
        chuanHoa(x.ns);
        chuanHoa(x.hd);
        return in;
    }
    friend ostream &operator<<(ostream &out, NhanVien x)
    {
        out << x.ma << " " << x.ten << " " << x.gt << " " << x.ns << " " << x.dc << " " << x.thue << " " << x.hd << endl;
        return out;
    }
};

bool cmp(NhanVien a, NhanVien b)
{
    string n1 = a.ns.substr(6, 4);
    string n2 = b.ns.substr(6, 4);
    string t1 = a.ns.substr(3, 2);
    string t2 = b.ns.substr(3, 2);
    string nn1 = a.ns.substr(0, 2);
    string nn2 = b.ns.substr(0, 2);
    if (n1 != n2)
        return n1 < n2;
    if (nn1 != nn2)
        return nn1 < nn2;
    return t1 < t2;
}
void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}