#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string ma, ten, gt, ns, dc, thue, hd; 
};

void nhap(struct NhanVien &a) {
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    scanf("\n");
    getline(cin, a.dc);
    cin >> a.thue >> a.hd;
}
int cnt = 1;
void inds(struct NhanVien ds[], int N) {
    for(int i = 0; i < N; i++) {
        string tmp = to_string(cnt);
        cnt++;
        ds[i].ma =string(5 - tmp.length(), '0') + tmp;
        cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].thue << " " << ds[i].hd << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}