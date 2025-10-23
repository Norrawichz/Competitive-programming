#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;
    
    for (auto x : s) if (x-'0' <= 0 || x-'0' > 6) {
        cout<< "ERROR";
        return 0;
    }

    vector<vector<string>> t(3);
    t[0] = {"   ", "   ","   "," * ","* *","* *","* *"};
    t[1] = {"   ", " * ","* *"," * ","   "," * ","* *"};
    t[2] = {"   ", "   ","   "," * ","* *","* *","* *"};
    for (int i=0; i<3; i++) {
        int cnt=0;
        for (auto x : s) {
            cnt++;
            cout<< t[i][x-'0']<<(cnt == 3? "":"|");
        }
        cout<< "\n";
    }
}