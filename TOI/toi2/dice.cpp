#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    while (t--) {
        string s;
        cin>> s;

        int a[6] = {1, 2, 3, 5, 4, 6};
        for (auto x : s) {
            if (x=='F') {
                swap(a[0], a[3]);
                swap(a[3], a[1]);
                swap(a[3], a[5]);
            }
            else if (x=='B') {
                swap(a[0], a[1]);
                swap(a[1], a[5]);
                swap(a[3], a[5]);
            }
            else if (x=='L') {
                swap(a[0], a[2]);
                swap(a[0], a[4]);
                swap(a[4], a[5]);
            }
            else if (x=='R') {
                swap(a[0], a[2]);
                swap(a[2], a[5]);
                swap(a[4], a[5]);
            }
            else if (x=='C') {
                swap(a[1], a[2]);
                swap(a[1], a[4]);
                swap(a[4], a[3]);
            }
            else if (x=='D') {
                swap(a[1], a[2]);
                swap(a[2], a[3]);
                swap(a[4], a[3]);
            }
        }
        cout<< a[1]<< " ";
    }
}