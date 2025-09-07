#include <bits/stdc++.h>
using namespace std;

void process(char** board, int start, int num) {
    for (int i = 0; i<num; i++) {
        board[i][start + i] = '\\';
    }
    for (int i = num-1, j = start+num; i>=0; i--, j++) {
        board[i][j] = '/';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;

    int nums[n];
    for (int i = 0; i<n; i++) {
        cin>> nums[i];
    }

    int maxl = 0, maxh = 0;
    for (int i = 0; i<n; i++) {
        maxl += nums[i] * 2;
        maxh = max(maxh, nums[i]);
    }
    char** board = new char*[maxh];
    for (int i = 0; i < maxh; i++) {
        board[i] = new char[maxl];
    }
    
    for (int i = 0; i<maxh; i++) {
        for (int j = 0; j<maxl; j++) {
            board[i][j] = ' ';
        }
    }

    int start = 0;
    for (int i = 0; i<n; i++) {
        process(board, start, nums[i]);
        start += nums[i]*2;
    }

    for (int i = 0; i<maxh; i++) {
        for (int j = 0; j<maxl; j++) {
            cout<< board[i][j];
        }
        cout<< endl;
    }
    return 0;
}