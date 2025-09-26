#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string n;
    cin>> n;

    for (int i=0; i<3; i++) if (n[i]-'0' > 6) n[i]='0';
    vector<vector<string>> a(3);
    a[0]={"    ","    "," *  ","*   ","* * ","* * ","* * "};
    a[1]={"    "," *  ","    "," *  ","    "," *  ","* * "};
    a[2]={"___ ","    "," *  ","  * ","* * ","* * ","* * "};
    for (int i=0; i<3; i++) {
        for (auto x : n) {
            cout<< a[i][x-'0'];
        }
        cout<< "\n";
    }
}