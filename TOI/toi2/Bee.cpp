#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<pair<int,int>> ans(25);
    int prv1=1, prv2=0;
    for (int i=1; i<25; i++) {
        ans[i].second=2+prv1*2+prv2;
        int tem=prv1;
        prv1+=prv2+1;
        prv2=tem;
        ans[i].first=prv1;
    }

    while (true) {
        int x;
        cin>> x;
        if (x == -1) break;
        cout<< ans[x].first<< " "<< ans[x].second<<'\n';
    }
}