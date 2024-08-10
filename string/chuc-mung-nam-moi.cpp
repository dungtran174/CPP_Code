#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    set<string> unique;
    for(int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        unique.insert(s);
    }
    cout << unique.size();
}
