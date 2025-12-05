#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<vector<string>> a = {{"", "ABC", "DEF"}, {"GHI", "JKL", "MNO"}, {"PQRS", "TUV", "WXYZ"}};
    int s,m;
    cin>> s>> m;

    int ci=-1, cj=-1, cnt=1;
    vector<char> ans;

    for (int i=0; i<3 && ci==-1; i++) {
        for (int j=0; j<3; j++) {
            if (cnt++ == s) {
                ci=i;
                cj=j;
                break;
            }     
        }
    }
    if (ci!=0 || cj!=0) ans.push_back(a[ci][cj][(m-1)%a[ci][cj].size()]);
    for (int i=0; i<n-1; i++) {
        int di,dj,t;
        cin>> dj>> di>> t;
        ci+=di;
        cj+=dj;

        if (ci==0 && cj==0) {
            while (!ans.empty() && t-->0) ans.pop_back();
            continue;
        }
        ans.push_back(a[ci][cj][(t-1)%a[ci][cj].size()]);
    }
    
    if (ans.empty()) cout<< "null";
    else for (auto &x : ans) cout<< x;
}