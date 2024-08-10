#include <bits/stdc++.h>
using namespace std;

string chuan(string bm){
	string res = "";
	stringstream ss(bm);
	string token;
	while(ss >> token){
		res += toupper(token[0]);
	}
	return res;
}
 
string getname(string name){
	string res, token;
	stringstream ss(name);
	while(ss >> token){
		res = token;
	}
	return res;
}
 
class GiangVien{
	private:
		string ten, bm, ma;
		static int cnt;
	public:
		void nhap();
		void in();
		string getTen(){
			return ten;
		}
		string getMa(){
			return ma;
		}
};
 
int GiangVien::cnt = 0;
void GiangVien::nhap(){
	++cnt;
	string s = to_string(cnt);
	if(s.size() < 2) s = "0" + s;
	ma = "GV" + s;
	getline(cin, ten);
	getline(cin, bm);
}
 
void GiangVien::in(){
	cout << ma << " " << ten << " " << chuan(bm) << endl;
}
 
bool cmp(GiangVien a, GiangVien b){
	if(getname(a.getTen()) != getname(b.getTen()))
		return getname(a.getTen()) < getname(b.getTen());
	return a.getMa() < b.getMa();
}
 
 
int main(){
	int n; cin >> n;
	cin.ignore();
	GiangVien a[n];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		a[i].in();
	}
	return 0;
}