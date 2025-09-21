#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5][5];
    for (int i = 0; i<5; i++) {
        for (int j = 0; j<5; j++) {
            cin>> arr[i][j]; 
        }
    }

    int pos = 0;
    bool found = false;
    for (int i = 0; i<5; i++) {
        int sum = 0;
        for (int j = 0; j<5; j++) {
            sum += arr[i][j]; 
        }
        if (sum % 2 != 0) {
            cout<< i<< " ";
            found = true;
            pos = i;
        }
    }

    if (found) {
        for (int i = 0; i<5; i++) {
            if (arr[pos][i] == 0) {
                int sum = 0;
                for (int j = 0; j<5; j++) {
                    sum += arr[j][i];
                }
                if (sum%2 != 0) {
                    cout<< i;
                }
            }
        }
    }
    else {
        cout<< "-1 -1";
    }
    return 0;
}