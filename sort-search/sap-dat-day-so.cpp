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
        vector<long long> a(n);
        map<long long, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] >= 0) {
                mp[a[i]] = 1;
            }
        }
        for(int i = 0; i < n; i++) {
            if(mp[i] == 1)
            {
                cout << i << " ";
            }
            else cout << -1 << " ";
        }
        cout << endl;   
    }
}