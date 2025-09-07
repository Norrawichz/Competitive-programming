#include <iostream>
#include <climits>
using namespace std;

int main() {
    int mn = INT_MAX;
    int num1, num2, num3;
    cin>> num1>>num2>>num3;
    if (num1 < mn) mn = num1;
    if (num2 < mn) mn = num2;
    if (num3 < mn) mn = num3;
    cout<< mn;
    return 0;
}