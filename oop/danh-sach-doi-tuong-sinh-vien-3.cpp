#include <bits/stdc++.h>
using namespace std;

int ii = 1;

string chuanhoa(string ten)
{
    stringstream ss(ten);
    string res = "";
    string token;
    while (ss >> token)
    {
        res += toupper(token[0]);
        for (int i = 1; i < token.size(); i++)
            res += tolower(token[i]);
        res += " ";
    }
    // res.erase(res.size() - 1);
    return res;
}

class SinhVien
{
public:
    string masv, ten, lop, ns;
    float gpa;
    friend istream &operator>>(istream &input, SinhVien &a)
    {
        scanf("\n");
        string tmp = to_string(ii);
        tmp = string(3 - tmp.size(), '0') + tmp;
        a.masv = "B20DCCN" + tmp;
        ii++;
        getline(cin, a.ten);
        cin >> a.lop >> a.ns >> a.gpa;
        return input;
    }
    friend ostream &operator<<(ostream &output, SinhVien a)
    {
        // string tmp = to_string(ii);
        // tmp = string(3 - tmp.size(), '0') + tmp;
        // a.masv = "B20DCCN" + tmp;
        // if (ii < 10)
        //     a.masv = "B20DCCN00";
        // else
        //     a.masv = "B20DCCN0";
        // a.masv = a.masv + to_string(ii);
        if (a.ns[1] == '/')
            a.ns = "0" + a.ns;
        if (a.ns[4] == '/')
            a.ns.insert(a.ns.begin() + 3, '0');
        // ii++;
        a.ten = chuanhoa(a.ten);
        cout << a.masv << " " << a.ten << a.lop << " " << a.ns;
        printf(" %.2f\n", a.gpa);
        return output;
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}
void sapxep(SinhVien a[], int n)
{
    sort(a, a + n, cmp);
}
int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    sapxep(ds, N);
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}