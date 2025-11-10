#include <bits/stdc++.h>
using namespace std;

vector<int> combi(vector<int> a1, vector<int> a2) {
    int s1=a1.size(), s2=a2.size(), l=0, r=0;

    vector<int> ans;
    while (l < s1 && r < s2) {
        if (a1[l] < a2[r]) ans.push_back(a1[l++]);
        else ans.push_back(a2[r++]);
    }

    while (l < s1) ans.push_back(a1[l++]);
    while (r < s2) ans.push_back(a2[r++]);

    return ans;
}

vector<int> recur(int l, int r, vector<int> &a) {
    if (l==r) return {a[l]};

    int mid=l+(r-l)/2;
    vector<int> sub1 = recur(l, mid, a);
    vector<int> sub2 = recur(mid+1, r, a);
    vector<int> ans = combi(sub1, sub2);
    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];
    
    vector<int> ans = recur(0, n-1, a);
    for (auto &x : ans) cout<< x<< ' ';

}