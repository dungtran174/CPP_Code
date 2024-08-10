#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int cnt = 0;
        for (int i = 0; i < n; i += 2)
        {
            b[i] = a[cnt++];
        }
        for (int i = 1; i < n; i += 2)
        {
            b[i] = a[cnt++];
        }
        for (int x : b)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}