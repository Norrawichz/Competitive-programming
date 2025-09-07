#include <iostream>
using namespace std;

int main(){
    int n, m, q, r;
    cin >> n>> m>> q>> r;
    if (m != q) {
        cout<< "ERROR"<< endl;
        return 0;
    }
    else {
        int matrix1[n][m];
        int matrix2[q][r];

        for(int i = 0; i < n; i++){
            for (int j = 0; j<m; j++){
                cin >> matrix1[i][j];
            }
        }

        for(int i = 0; i < q; i++){
            for (int j = 0; j<r; j++){
                cin >> matrix2[i][j];
            }
        }

        int result[n][r];
        for(int i = 0; i < n; i++){
            for (int j = 0; j<r; j++){
                for (int k = 0; k<m; k++){
                    result[i][j] += matrix1[i][k] * matrix2[k][j];   
                }
            }
        }

        for(int i = 0; i<n; i++){
            for (int j = 0; j<r; j++){
                cout<< result[i][j]<< " ";
            }
            cout<<"\n";
        }
    }
    return 0;
}