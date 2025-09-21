#include <iostream>
using namespace std;

void flowerfield(int** board, int normal, int add, int l, int start) {
    for (int i = 0; i < normal; i++) {
        for (int j = 0; j < l; j++) {
            board[j][i] = start;
            start++;
        }
    }
    for (int i = 0; i < l-1; i++) {
        for (int j = 0; ) {
            board[j][i]
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, n;
    cin>> l>> n;

    int i = 1;
    int layer = 0;
    int current = 0;
    while (current < n) {
        current += l * i + (l * (l-1))/2;
        i += l;
        layer++;
    }
    
    int length = layer*l;
    int** board = new int*[length];
    for (int i = 0; i<length; i++) {
        board[i] = new int[length];
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            board[i][j] = 0;
        }
    }
    cout<< layer<<endl;
    i = 1;
    current = 0;
    while (current < n) {
        current += l * i + (l * (l-1))/2;
        flowerfield(board, l * i, )
        i += l;
    }
    return 0;
}