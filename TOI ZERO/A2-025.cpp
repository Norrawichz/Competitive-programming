#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int row, column;
    cin >> row >> column;

    vector<vector<int>> arr(row, vector<int>(column, 0));

    int rrow, rcolumn;
    cin >> rrow >> rcolumn;

    int locate;
    cin >> locate;
    for (int x = 0; x < locate; x++) {
        int r, c;
        cin >> r >> c;
        arr[r][c] = 3;
        for (int i = r - 2; i <= r + 2; i++) {
            for (int j = c - 2; j <= c + 2; j++) {
                if (i >= 0 && i < row && j >= 0 && j < column) {
                    if ((i == r - 2 || i == r + 2 || j == c - 2 || j == c + 2) && arr[i][j] <= 1) {
                        arr[i][j] = 1;
                    } 
                    else if ((i == r - 1 || i == r + 1 || j == c - 1 || j == c + 1) && arr[i][j] <= 2) {
                        arr[i][j] = 2;
                    }
                }
            }
        }
    }

    int count = 0;
    int result = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (arr[i][j] == 0)
                count++;
            else if (arr[i][j] == arr[rrow][rcolumn]) {
                result = arr[i][j];
            }
        }
    }
    cout << count << endl;
    if (result == 3)
        cout << "100%";
    else if (result == 2)
        cout << "60%";
    else if (result == 1)
        cout << "20%";
    else if (result == 0)
        cout << "0%";

    return 0;
}