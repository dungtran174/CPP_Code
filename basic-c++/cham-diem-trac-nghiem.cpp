#include <bits/stdc++.h>
using namespace std;

string removeSpaces(string input) {
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    return input;
}

int main() {
    int t; cin >> t;
    cin.ignore(); // Loại bỏ newline còn lại từ input trước
    map<int, string> answers = {
        {101, "ABBADCCABDCCABD"},
        {102, "ACCABCDDBBCDDBB"}
    };
    
    while(t--) {
        int code;
        string response;
        cin >> code;
        cin.ignore(); // Loại bỏ khoảng trắng giữa mã đề và đáp án
        getline(cin, response); // Đọc đáp án có khoảng trắng
        
        response = removeSpaces(response); // Loại bỏ khoảng trắng từ đáp án của thí sinh
        
        string correctAnswers = answers[code];
        int score = 0;
        for(int i = 0; i < 15; i++) {
            if(response[i] == correctAnswers[i]) score++;
        }
        
        double finalScore = (double)score / 15 * 10;
        cout << fixed << setprecision(2) << finalScore << endl;
    }
}