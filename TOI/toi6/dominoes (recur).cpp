#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> ans;

vector<string> tem;

int n;

void recur(int cur) {
    if (cur>n) {
        ans.push_back(tem);
        return;
    }
    
    tem.push_back("--");
    recur(cur+1);
    tem.pop_back();
    if (cur < n) {
        tem.push_back("||");
        recur(cur+2);
        tem.pop_back();
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n;

    recur(1);
    for (auto &x : ans) {
        for (auto &y : x) {
            cout<< y<<'\n';
        }
        cout<< "E\n";
    }

}