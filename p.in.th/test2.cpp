#include <bits/stdc++.h>
using namespace std;

struct country{
    string name;
    int score = 0;
    int gl = 0;
    int goal = 0;
};

bool compare(const country &a, const country &b) {
    if (a.score != b.score) return a.score > b.score;
    else if (a.gl != b.gl) return a.gl > b.gl;
    return a.goal > b.goal;
    
}
int main() {
    country arr[4];
    for (int i = 0; i<4; i++) {
        cin>> arr[i].name;
    }
    int board[4][4];
    for (int i = 0; i<4; i++) {
        for (int j = 0; j < 4; j++) {
            cin>> board[i][j];
        }
    }
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4; j++) {
            if (board[i][j] > board[j][i]) {
                arr[i].score += 3;
            }
            else if (board[i][j] == board[j][i] && i != j) {
                arr[i].score += 1;
            }
        }
        for (int j = 0; j<4; j++) {
            arr[i].goal += board[i][j];
        }
        arr[i].gl = arr[i].goal;
        for (int j = 0; j<4; j++) {
            arr[i].gl -= board[j][i];
        }
    }
    sort(arr, arr+4, compare);
    for (int i = 0; i<4; i++) {
        cout<< arr[i].name<<" "<< arr[i].score<<endl;
    }
    return 0;
}