#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c.push_back(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            c.push_back(b[i]);
        }
        sort(c.begin(), c.end());
        for (int i = 0; i < c.size(); i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
}