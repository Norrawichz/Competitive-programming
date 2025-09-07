#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;
    string an = "hello";
    for (int i=0, j=0; i<s.size(); i++) {
        if (s[i] == an[j]) {
            j++;
        }
        if (j == 5) {
            cout<< "YES";
            return 0;
        }
    }
    cout<< "NO";
}