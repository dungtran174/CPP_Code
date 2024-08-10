#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            // Kiểm tra xem chuỗi "084" có bắt đầu từ vị trí i không
            if(i + 2 < n && s[i] == '0' && s[i+1] == '8' && s[i+2] == '4') {
                i += 2; // Bỏ qua chuỗi "084" bằng cách tăng i
            } else {
                cout << s[i]; // In ký tự hiện tại nếu nó không phải là phần của "084"
            }
        }
        cout << endl; // Xuống dòng sau mỗi test case
    }
}