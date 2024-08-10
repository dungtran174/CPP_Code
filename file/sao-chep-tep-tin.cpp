#include <bits/stdc++.h>    
using namespace std;

int main() {
    ifstream in("PTIT.in", ios::in);
    ofstream out("PTIT.out", ios::out);
    string line;
    while(getline(in, line)) {
        out << line << endl;
    }
    in.close();
    out.close();
}