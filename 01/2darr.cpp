#include <iostream>
#include <vector>
using namespace std;

int main(){
    const int ROWS = 3;
    const int COLS = 4;

    int sum[ROWS];
    for(int i = 0; i<ROWS; i++) sum[i] = 0;

    int matrix[ROWS][COLS] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    for (int i = 0; i<ROWS; i++){
        for (int j = 0; j<COLS; j++){
            sum[i] += matrix[i][j];
        }
    }

    for(int i = 0; i<ROWS; i++) cout << sum[i]<< endl;
    return 0;
}