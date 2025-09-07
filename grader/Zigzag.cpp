#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,n;
    cin>> s>> n;
    int ss = s.size(), ns = n.size();
    int i = 0, j = 0;
    while (i < ss || j < ns) {
        if (i < ss) {
            cout<< s[i];
            i++;
        }
        if (j < ns) {
            cout<< n[j];
            j++;
        }
    }
    
    return 0;
}