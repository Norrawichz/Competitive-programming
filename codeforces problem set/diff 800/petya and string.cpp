#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin>> a>> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    for (int i=0; i<a.size(); i++) {
        if (a[i] > b[i]) {
            cout<< 1;
            return 0;
        }
        else if (a[i] < b[i]) {
            cout<< -1;
            return 0;
        }
    }
    cout<< 0;
}