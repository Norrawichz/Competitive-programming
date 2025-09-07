#include <bits/stdc++.h>
using namespace std;

int tonum(string s) {
    if (s== "Bessie") return 0;
    else if (s=="Elsie") return 1;
    else return 2;
}

auto leader(vector<int> s) {
    int mx=-1;
    for (int i=0; i<3; i++) mx=max(mx, s[i]);
    vector<bool> lead = {s[0]==mx, s[1]==mx, s[2]==mx};
    return lead;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
    int n;
    cin>> n;
    vector<int> milk(3,7);
    vector<pair<int,pair<int,int>>> time(n);
    for (int i=0; i<n; i++) {
        cin>> time[i].first;
        string s;
        cin>> s;
        time[i].second.first = tonum(s);
        cin>> time[i].second.second;
    }

    int ans=0;
    sort(time.begin(), time.end());
    auto before = leader(milk);
    for (int i=0; i<n; i++) {
        milk[time[i].second.first] += time[i].second.second;
        auto after = leader(milk);
        if (before != after) {
            ans++;
            before = after;
        } 
    }
    cout<< ans;
}