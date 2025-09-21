#include <iostream>
using namespace std;

int main() {
    char x;
    char vowels[5] = {'a','e','i','o','u'};
    cin>> x;
    bool vowel = false;
    for (int i = 0; i<5; i++) {
        if (x == vowels[i]) {
            vowel = true;
            break;
        }
    }
    if (vowel) cout<< "yes";
    else cout<< "no";

    return 0;
}