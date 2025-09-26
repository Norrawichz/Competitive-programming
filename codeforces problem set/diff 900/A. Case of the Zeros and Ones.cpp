#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    string s;
    cin>> n>> s;

    int ze=0, on=0;
    for (int i=0; i<n; i++) {
        if (s[i]=='0') ze++;
        else on++;
    }

    cout<< abs(ze-on);
}