#include <iostream>
using namespace std;

int main() {
    string code;
    cin >> code;
    if (code.size() != 5) return 0;

    string theos = "";
    char currentchar = code[0];
    int count = 0;

    for (char c : code) {
        if (c == currentchar) {
            count++;
        } else {
            theos += to_string(count) + currentchar;
            currentchar = c;
            count = 1;
        }
    }
    theos += to_string(count) + currentchar;
    cout << theos << endl;
    return 0;
}