#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, R, i = 0;
    cin>> N>> R;
    while (pow(i, R) < N) {
        cout<< "Step "<< i+1<< ": ";
        for (int j = 1; j<=R; j++) {
            if (j == R) cout<< i;
            else cout<< i<< " x ";
        }
        cout<< " = "<< pow(i,R)<< " (less than "<< N<<")"<< endl;
        i++;
    }
    int p = pow(i, R);
    if (p > N) {
        cout << "Step " << i + 1 << ": ";
        for (int j = 1; j <= R; j++) {
            if (j == R) cout << i;
            else cout << i << " x ";
        }
        cout << " = " << pow(i, R) << " (more than " << N << ")" << endl;
        cout << "Answer is " << i - 1;
    }
    else if (p == N) {
        cout << "Step " << i + 1 << ": ";
        for (int j = 1; j <= R; j++) {
            if (j == R) cout << i;
            else cout << i << " x ";
        }
        cout << " = " << pow(i, R) << " (equal to " << N << ")" << endl;
        cout << "Answer is " << i;
    }
    return 0;
}