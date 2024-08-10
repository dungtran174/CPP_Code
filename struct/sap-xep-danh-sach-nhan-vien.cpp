#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string ma, ten, gt, ns, dc, thue, hd;
};

void chuanHoa(string &s) {
    if(s[1] == '/') s = '0' + s;
    if(s[4] == '/') s = s.insert(3, "0");
}

bool cmp(NhanVien a, NhanVien b) {
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
int cnt = 1;
void nhap(NhanVien &a) {
    string tmp = to_string(cnt);
    cnt++;
    a.ma = string(5 - tmp.length(), '0') + tmp;
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    chuanHoa(a.ns);
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.thue >> a.hd;
    chuanHoa(a.hd);
}

void sapxep(NhanVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

void inds(NhanVien ds[], int N) {
    for(int i = 0; i < N; i++) {
        cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].thue << " " << ds[i].hd << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}