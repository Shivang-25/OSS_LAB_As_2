#include <iostream>
#include <map>
#include <string>
using namespace std;

void printFrequency(const string& str) {
    map<string, int> wordFrequency;
    string word = "";

    for (char ch : str) {
        if (ch == ' ') {
            if (!word.empty()) {
                ++wordFrequency[word];
                word = "";
            }
        } else {
            word += ch;
        }
    }

    if (!word.empty()) {
        ++wordFrequency[word];
    }

    for (const auto& entry : wordFrequency) {
        cout << entry.first << " - " << entry.second << endl;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    printFrequency(str);
    return 0;
}
