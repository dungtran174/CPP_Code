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

void chuanHoaTen(string &s) {
    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
}
void docTen(string &s)
{
    string res = "";
    stringstream ss(s);
    string tmp;
    while(ss >> tmp) {
        chuanHoaTen(tmp);
        res += tmp + " ";
    }
    s = res;
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
        docTen(a[i].ten);
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

bool cmp(SinhVien x, SinhVien y) {
    if(x.gpa != y.gpa) return x.gpa > y.gpa;
    return x.ma < y.ma;
}

void sapxep(SinhVien a[], int n) {
    sort(a, a + n, cmp);
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}