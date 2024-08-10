#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        int a[k][n];
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> res;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                res.push_back(a[i][j]);
            }
        }
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}