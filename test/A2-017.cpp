#include <iostream>
using namespace std;

int main() {
    char size, type, topping;
    int number;
    cin>> size>> type;
    cin>> topping;
    
    int cost = 0;
    if (topping != 'N') {
        cin>> number;
        if (topping == 'P') {
            for (int i = 0; i<number; i++) {
                cost += 15;
            }
        }
        else if (topping = 'E') {
            for (int i = 0; i<number; i++) {
                cost += 10;
            }
        }
    }
    if (type == 'R') cost += 60;
    else if (type == 'T') cost += 80;
    
    if (size == 'M') cost += 20;
    else if (size == 'L') cost += 40;
    else if (size == 'S') cost += 0;

    cout<< cost;
    return 0;
}