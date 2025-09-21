#include <iostream>
using namespace std;

int main() {
    int month, date;
    cin>> month;
    cin>> date;

    if (month <= 3) {
        if (month == 3 && date >= 21 && date % 3 == 0) {
            cout<< "spring";
        }
        else {
            cout<< "winter";
        }
    }
    else if (month <= 6) {
        if (month == 6 && date >= 21 && date % 3 == 0) {
            cout<< "summer";
        }
        else {
            cout<< "spring";
        }
    }
    else if (month <= 9) {
        if (month == 9 && date >= 21 && date % 3 == 0) {
            cout<< "fall";
        }
        else {
            cout<< "summer";
        }
    }
    else if (month <= 12) {
        if (month == 12 && date >= 21 && date % 3 == 0) {
            cout<< "winter";
        }
        else {
            cout<< "fall";
        }
    }
    return 0;
}