#include <bits/stdc++.h>
using namespace std;

void process1(char** board1, int start, int num) {
    for (int i = 0; i<num; i++) {
        board1[i][start + i] = '\\'; 
    }
    for (int i = num - 1, j = start + num; i >= 0; i--, j++) {
        board1[i][j] = '/';
    }
}

void process2(char** board2, int start, int num, int maxh2) {
    for (int i = maxh2 - 1, j = start; i >= maxh2 - num; i--, j++) {
        board2[i][j] = '/';
    }
    for (int i = maxh2 - num, j = start + num; i <= maxh2 - 1; i++, j++) {
        board2[i][j] = '\\';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, r;
    cin>> n>> r;
    int nums1[n], nums2[r];
    for (int i = 0; i<n; i++) cin>> nums1[i];
    for (int i = 0; i<r; i++) cin>> nums2[i];

    int maxh1 = 0, maxl1 = 0;
    for (int i = 0; i<n; i++) {
        maxh1 = max(maxh1, nums1[i]);
        maxl1 += nums1[i]*2;
    }
    int maxh2 = 0, maxl2 = 0;
    for (int i = 0; i<r; i++) {
        maxh2 = max(maxh2, nums2[i]);
        maxl2 += nums2[i]*2;
    }

    char** board1 = new char*[maxh1];
    for (int i = 0; i<maxh1; i++) {
        board1[i] = new char[maxl1];
    }
    char** board2 = new char*[maxh2];
    for (int i = 0; i<maxh2; i++) {
        board2[i] = new char[maxl2];
    }

    for (int i = 0; i<maxh1; i++) {
        for (int j = 0; j<maxl1; j++) {
            board1[i][j] = ' ';
        }
    }
    for (int i = 0; i<maxh2; i++) {
        for (int j = 0; j<maxl2; j++) {
            board2[i][j] = ' ';
        }
    }

    int start1 = 0;
    for (int i = 0; i<n; i++) {
        process1(board1, start1, nums1[i]);
        start1 += nums1[i]*2;
    }
    int start2 = 0;
    for (int i = 0; i<r; i++) {
        process2(board2, start2, nums2[i], maxh2);
        start2 += nums2[i]*2;
    }

    for (int i = 0; i<maxh1; i++) {
        for (int j = 0; j<maxl1; j++) {
            cout<< board1[i][j];
        }
        cout<< endl;
    }
    for (int i = 0; i<maxh2; i++) {
        for (int j = 0; j<maxl2; j++) {
            cout<< board2[i][j];
        }
        cout<< endl;
    }
    return 0;
}