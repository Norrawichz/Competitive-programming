#include <iostream>
using namespace std;

int main(){
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);

    int text_len = text.length();
    int pattern_len = pattern.length();
    bool found = false;

    for (int i = 0; i<=text_len - pattern_len; i++) {
        bool match = true;
        for (int j = 0; j<pattern_len; j++) {
            if (text[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            cout<< "Found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout<< "Not Found"<< endl;
    }
}