#include<bits/stdc++.h> 
using namespace std; 
string thuong(string s){ 
    for(int i = 0 ; i < s.size() ; i++){ 
        s[i] = tolower(s[i]); 
    } 
    return s; 
} 
string dau(string s){ 
    s[0] = toupper(s[0]); 
    return s; 
} 
int main(){ 
    string s; 
    vector<string> mp; 
    while(cin >> s){ 
        s = thuong(s); 
        mp.push_back(s); 
    } 
    int ok = 1; 
    for(auto it : mp){ 
        if(ok){ 
            it = dau(it); ok = 0; 
        } 
        char s = it[it.size() - 1]; 
        if(s == '.' || s == '?' || s == '!'){ 
            it.pop_back(); 
            cout << it << endl; 
            ok = 1; 
        } 
        else{ 
            cout << it << " "; 
        } 
    } 
}