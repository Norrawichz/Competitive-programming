#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[9];
    int s = 0;
    for (int i = 0; i<9; i++) {
        cin>> arr[i];
        s += arr[i];
    }
    for (int i = 0; i<9; i++) {
        for (int j = 0; j<9; j++) {
            if (i == j) continue;
            if (s - (arr[i] + arr[j]) == 100) {
                for (int k = 0; k<9; k++) {
                    if (k != i && k != j) {
                        cout<< arr[k]<<endl;
                    }
                }
                return 0;
            }
        }
    }
    return 0;
}