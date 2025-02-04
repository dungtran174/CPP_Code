#include <bits/stdc++.h>
using namespace std;

int ii = 1;
class SinhVien
{
public:
    string ma, ten, lop, ns;
    float gpa;
    friend istream &operator>>(istream &input, SinhVien &a)
    {
        cin.ignore();
        getline(cin, a.ten);
        cin >> a.lop >> a.ns >> a.gpa;
        return input;
    }
    friend ostream &operator<<(ostream &output, SinhVien a)
    {
        if (ii < 10)
            a.ma = "B20DCCN00";
        else
            a.ma = "B20DCCN0";
        a.ma = a.ma + to_string(ii);
        if (a.ns[1] == '/')
            a.ns = "0" + a.ns;
        if (a.ns[4] == '/')
            a.ns.insert(3, "0");
        ii++;
        cout << a.ma << " " << a.ten << " " << a.lop << " " << a.ns;
        printf(" %.2f\n", a.gpa);
        return output;
    }
};

int
main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}