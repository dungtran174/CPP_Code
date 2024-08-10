#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> elements;
        for (int i = 0; i < n * n; i++) {
            int temp;
            cin >> temp;
            elements.push_back(temp);
        }
        sort(elements.begin(), elements.end());
        cout << elements[k - 1] << endl;
    }
}