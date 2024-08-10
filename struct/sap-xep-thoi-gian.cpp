#include <bits/stdc++.h>
using namespace std;

struct Time
{
    int h, m, s;
    friend istream &operator>>(istream &in, Time &a)
    {
        in >> a.h >> a.m >> a.s;
        return in;
    }
    friend ostream &operator<<(ostream &out, Time a)
    {
        out << a.h << " " << a.m << " " << a.s << endl;
        return out;
    }
    friend bool operator<(Time x, Time y)
    {
        if (x.h != y.h)
            return x.h < y.h;
        if (x.m != y.m)
            return x.m < y.m;
        return x.s < y.s;
    }
};

int main() {
    int n; cin >> n;
    Time a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        cout << a[i];
    }
}
