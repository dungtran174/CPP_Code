#include <iostream>
#define MAX 50

using namespace std;

int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

int main() {
    int n, m, p;
    cin >> n >> m >> p;

    // Đọc ma trận A
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    // Đọc ma trận B
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> B[i][j];
        }
    }

    // Khởi tạo ma trận C
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            C[i][j] = 0;
        }
    }

    // Tính ma trận tích C = A * B
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < m; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // In ma trận kết quả
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}