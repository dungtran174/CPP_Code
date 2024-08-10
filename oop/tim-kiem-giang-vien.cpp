#include <bits/stdc++.h>
using namespace std;

bool tim(string name, string word)
{
    for (char &x : name)
        x = tolower(x);
    for (char &x : word)
        x = tolower(x);
    return name.find(word) != string::npos;
}

struct data
{
    string ten, mon, ma, tt, s;
};
void chuanhoa(string &a)
{
    string res = "";
    string token;
    stringstream ss(a);
    while (ss >> token)
    {
        res += toupper(token[0]);
    }
    a = res;
}
int main()
{
    int n;
    cin >> n;
    struct data a[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i].ten);
        getline(cin, a[i].mon);
        if (i < 9)
            a[i].ma = "GV0";
        else
            a[i].ma = "GV";
        a[i].ma += to_string(i + 1);
        
        chuanhoa(a[i].mon);
    }
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string x;
        getline(cin, x);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << x << ":" << endl;
        string k = "";
        
        for (int i = 0; i < n; i++)
        {
            if (tim(a[i].ten, x))
                cout << a[i].ma << " " << a[i].ten << " " << a[i].mon << endl;
        }
    }
}