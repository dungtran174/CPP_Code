#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
bool is(const string& s) {
    istringstream iss(s);
    int num;
    return (iss >> num) && (iss.eof());
}

int main() {
    ifstream in("DATA.in");
    string line;
    long long Sum = 0;

    if (in.is_open()) {
        while (getline(in, line)) {
            istringstream iss(line);
            string word;
            while (iss >> word) {
                if (is(word)) {
                    try {
                        int number = stoi(word);
                        Sum += number;
                    } catch (const out_of_range&) {
                        // Số quá lớn để chứa trong kiểu int, bỏ qua
                    }
                }
            }
        }
        in.close();
    }

    cout << Sum << endl;
    return 0;
}
