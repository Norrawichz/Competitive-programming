#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);
    int n;
    cin>> n;
    map<pair<int,int>, int> last;
    int x=0, y=0, t=0, ans=INT_MAX;
    for (int i=0; i<n; i++) {
        char c;
        int s;
        cin>> c>> s;
        for (int j=0; j<s; j++) {
            t++;
            if (c=='N') y++;
            else if (c=='S') y--;
            else if (c=='E') x++;
            else if (c=='W') x--;
            auto p = make_pair(x,y);
            if (last.find(p) != last.end()) ans = min(ans,t-last[p]);
            last[p]=t;
        }
    }
    cout<< (ans==INT_MAX? -1 : ans);
}