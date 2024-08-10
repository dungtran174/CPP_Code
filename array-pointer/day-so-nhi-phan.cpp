#include <bits/stdc++.h>
using namespace std;

int maxLengthCommonSpan(vector<int>& A1, vector<int>& A2) {
    int n = A1.size();
    vector<int> prefixSum1(n+1, 0), prefixSum2(n+1, 0);
    for (int i = 0; i < n; ++i) {
        prefixSum1[i+1] = prefixSum1[i] + A1[i];
        prefixSum2[i+1] = prefixSum2[i] + A2[i];
    }

    int maxLength = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = i+1; j <= n; ++j) {
            if (prefixSum1[j] - prefixSum1[i] == prefixSum2[j] - prefixSum2[i]) {
                maxLength = max(maxLength, j - i);
            }
        }
    }
    return maxLength;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> A1(n), A2(n);
        for (int i = 0; i < n; ++i) cin >> A1[i];
        for (int i = 0; i < n; ++i) cin >> A2[i];

        cout << maxLengthCommonSpan(A1, A2) << endl;
    }
    return 0;
}