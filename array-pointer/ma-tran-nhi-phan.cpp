#include <bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n][3];
    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        int ones = 0;
        for (int j = 0; j < 3; ++j) {
            if (A[i][j] == 1) {
                ones++;
            }
        }
        if (ones > 1) {
            count++;
        }
    }
    cout << count << endl;
}