#include<bits/stdc++.h>
using namespace std;

int countkDist(string str, int k)
{
    int n = str.length();
    int res = 0;

    int cnt[26];

    for (int i = 0; i < n; i++)
    {
        int dist_count = 0;
        memset(cnt, 0, sizeof(cnt));
        for (int j=i; j<n; j++)
        {
            if (cnt[str[j] - 'a'] == 0)
                dist_count++;
        
            cnt[str[j] - 'a']++;
            
            if (dist_count == k)
                res++;
            if(dist_count > k) break;
        }
    }
    return res;
}

int main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int k; cin >> k;
        cout << countkDist(s, k) << endl;
    }
}
