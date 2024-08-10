#include <bits/stdc++.h>
using namespace std;
int t = 1;

void chuanHoa(string &s) {
    if(s[1] == '/') s = '0' + s;
    if(s[4] == '/') s.insert(3, "0");
}
struct NhanVien
{
    string ma, ten, gt, ns, dc, thue, hd;
    friend istream &operator>>(istream &in, NhanVien &x)
    {
        string tmp = to_string(t); t++;
        x.ma = string(5-tmp.size(), '0') + tmp;
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
    friend ostream& operator<<(ostream &out, NhanVien x) {
        out << x.ma << " " << x.ten << " " << x.gt << " " << x.ns << " " << x.dc << " " << x.thue << " " << x.hd << endl;
        return out;
    }
};

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}