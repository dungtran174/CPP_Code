#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int countPaths(vector<vector<int>>& A, int N, int K, int i, int j, vector<vector<vector<int>>>& dp) {
    if (i >= N || j >= N) return 0; // Nếu vượt ra ngoài ma trận, không có cách nào
    if (i == N-1 && j == N-1) return (A[i][j] == K) ? 1 : 0; // Nếu đến đích, kiểm tra tổng có bằng K không

    if (dp[i][j][K] != -1) return dp[i][j][K]; // Nếu đã tính trước đó, trả về kết quả đã lưu

    int remainingK = K - A[i][j];
    if (remainingK < 0) return 0; // Nếu tổng vượt quá K, không có cách nào

    // Tính số cách di chuyển từ (i, j) đến đích
    int right = countPaths(A, N, remainingK, i, j+1, dp);
    int down = countPaths(A, N, remainingK, i+1, j, dp);

    dp[i][j][K] = right + down; // Lưu kết quả vào dp
    return dp[i][j][K];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<vector<int>> A(N, vector<int>(N));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> A[i][j];
            }
        }

        vector<vector<vector<int>>> dp(N, vector<vector<int>>(N, vector<int>(K+1, -1)));
        cout << countPaths(A, N, K, 0, 0, dp) << endl;
    }
}