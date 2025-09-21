#include <iostream>
using namespace std;

int main() {
    int range;
    char input_start;
    string colors[3] = {"Red", "Green", "Blue"};
    int start = 0;
    cin>> input_start>> range;
    if (input_start == 'R') start = 0;
    else if (input_start == 'G') start = 1;
    else if (input_start == 'B') start = 2;
    for (int i = start; i<range + start; i++) {
        int pos = i%3;
        cout<< colors[pos]<<" ";
    }
    return 0;
}