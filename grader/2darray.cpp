#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, c;
    cin>> r>> c;
    int arr[r][c];
    for (int i = 0; i<r; i++) for (int j = 0; j<c; j++) cin>> arr[i][j];
    for (int j = 0; j<c; j++) cout<< arr[0][j]<< " ";
    for (int i = 1; i<r; i++) cout<< arr[i][c-1]<< " ";
    if (r > 1) for (int j = c-2; j>=0; j--) cout<< arr[r-1][j]<< " ";
    if (c > 1) for (int i = r-2; i>0; i--) cout<< arr[i][0]<< " ";
    return 0;
}