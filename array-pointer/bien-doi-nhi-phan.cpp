#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m], rows[n] = {0}, cols[m] = {0};

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
                if(a[i][j] == 1) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(rows[i] == 1 || cols[j] == 1) {
                    a[i][j] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
}