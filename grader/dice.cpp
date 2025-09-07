#include <bits/stdc++.h>
using namespace std;

void setdiceface(char board[3][11], int start, int num) {
    if (num == 1) {
        board[1][start + 1] = '*';
    }
    else if (num == 2) {
        board[1][start] = '*';
        board[1][start + 2] = '*'; 
    }
    else if (num == 3) {
        board[0][start + 1] = '*';
        board[1][start + 1] = '*';
        board[2][start + 1] = '*';
    }
    else if (num == 4) {
        board[0][start] = '*';
        board[0][start + 2] = '*';
        board[2][start] = '*';
        board[2][start + 2] = '*';
    }
    else if (num == 5) {
        board[0][start] = '*';
        board[0][start + 2] = '*';
        board[1][start + 1] = '*';
        board[2][start] = '*';
        board[2][start + 2] = '*';
    }
    else if (num == 6) {
        board[0][start] = '*';
        board[0][start + 2] = '*';
        board[1][start] = '*';
        board[1][start + 2] = '*';
        board[2][start] = '*';
        board[2][start + 2] = '*';
    }
}

int main() {
    char board[3][11];
    int start[3] = {0, 4, 8};
    int n;
    cin>> n;

    int a = n/100, b = (n%100)/10, c = n%10;
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<11; j++) {
            if (j == 3 || j == 7) {
                board[i][j] = '|';
            }
            else board[i][j] = ' ';
        }
    }

    setdiceface(board, start[0], a);
    setdiceface(board, start[1], b);
    setdiceface(board, start[2], c);

    for (int i = 0; i<3; i++) {
        for (int j = 0; j<11; j++) {
            cout<< board[i][j];
        }
        cout<<endl;
    }
    return 0;
}