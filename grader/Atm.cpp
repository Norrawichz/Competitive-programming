#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c; // Input available denominations
    int i = 0;
    while (i != 6) {
        int val;
        cin >> val;

        int a1 = val / 1000;
        int b1 = (val - a1 * 1000) / 500;
        int c1 = (val - a1 * 1000 - b1 * 500) / 100;

        if (a1 > a || b1 > b || c1 > c){
            cout << "ERROR\n";
            cout << a << " " << b << " " << c << "\n";
        } 
        else{
            a -= a1;
            b -= b1;
            c -= c1;

            cout << "1000 = " << a1 << "\n";
            cout << "500 = " << b1 << "\n";
            cout << "100 = " << c1 << "\n";
            cout << a << " " << b << " " << c << "\n";
        }

        if (a == 0 && b == 0 && c == 0) {
            cout << "EMPTY\n";
            i = false;
        }
        i++;
    }
    return 0;
}
