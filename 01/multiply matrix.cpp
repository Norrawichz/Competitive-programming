#include <iostream>
using namespace std;

int main(){
    int m, n, q, p;
    cin>> m>> n>> q>> p;
    if (n != q) return 0;
    int matrix1[m][n];
    int matrix2[q][p];
    int result[m][p];

    for (int i = 0; i<m; i++) {
        for (int j = 0; j<p; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cin>> matrix1[i][j];
        }
    }
    for (int i = 0; i<q; i++) {
        for (int j = 0; j<p; j++) {
            cin>> matrix2[i][j];
        }
    }
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<p; j++) {
            for (int k = 0; k<n; k++) {
                result[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<p; j++) {
            cout<< result[i][j]<< " ";
        }
        cout<< endl;
    }
    return 0;
}