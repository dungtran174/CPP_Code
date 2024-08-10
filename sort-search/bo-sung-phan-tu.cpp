#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = true;
        }
        int ans = 0;
        for (int i = *min_element(a, a + n); i < *max_element(a, a + n); i++)
        {
            if (mp[i] == false)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}