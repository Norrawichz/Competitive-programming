#include <bits/stdc++.h>
using namespace std;

string torom(int i) {
    vector<pair<string, int>> p = {{"c", 100}, {"xc", 90}, {"l", 50}, {"xl", 40}, {"x", 10}, {"ix", 9}, {"v", 5}, {"iv", 4}, {"i", 1}};
    string a="";
    for (auto pr : p) {
        int n=pr.second;
        string r=pr.first;
        while (i >= n) {
            i-=n;
            a+=r;
        }
    }
    return a;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    int ii=0, vv=0, xx=0, ll=0, cc=0;
    for (int i=1; i<=n; i++) {
        string s=torom(i);
        for (auto x : s) {
            if (x == 'i') ii++;
            else if (x == 'v') vv++;
            else if (x == 'x') xx++;
            else if (x == 'l') ll++;
            else if (x == 'c') cc++;
        }
    }
    cout<< ii<< " "<< vv<< " "<< xx<< " "<< ll<< " "<< cc;
}