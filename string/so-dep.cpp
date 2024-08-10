#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string num) {
    int len = num.length();
    for (int i = 0; i < len / 2; ++i) {
        if (num[i] != num[len - i - 1]) {
            return false;
        }
    }
    return true;
}

bool isAllEvenDigits(string num) {
    for (char c : num) {
        if (c != '0' && c != '2' && c != '4' && c != '6' && c != '8') {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; ++i) {
        string num;
        getline(cin, num);
        
        if (isPalindrome(num) && isAllEvenDigits(num)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
