#include <iostream>
using namespace std;

int main() {
    int N;
    cin>> N;
    if (N < 4 && N > 0) {
        for (int i = 0; i<N; i++) cout<<"I";
    }
    else if (N == 4) cout<<"IV";
    else if (N > 5 && N < 9) {
        cout<<"V";
        for (int i = 0; i<N%5; i++) {
            cout<<"I";
        }
    }
    else if (N == 9) cout<<"IX";
    else if (N == 0 || N > 9) {
        cout<< "Error : Out of range";
    }
    else if (N < 0) {
        cout<< "Error : Please input positive number";
    }
    return 0;
}