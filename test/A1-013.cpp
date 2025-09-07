#include <iostream>
using namespace std;

int main() {
    char input_char;
    int input_num;
    cin>> input_char;
    cin>> input_num;
    bool c = false, num = false;
    if (input_char == 'H') {
        c = true;
    }
    if (input_num == 4567) {
        num = true;
    }
    if (c && num) cout<< "safe unlocked";
    else if (c) cout<< "safe locked - change digit";
    else if (num) cout<< "safe locked - change char";
    else cout<< "safe locked";
    return 0;
}