#include <bits/stdc++.h>
using namespace std;

int recur(int cur, vector<int> &a, vector<int> &mem) {
    if (cur == a.size()-1) return 0;

    if (mem[cur] != -1) return mem[cur];
    return mem[cur] = min(recur(cur+1, a, mem), (cur + a[cur] < a.size() ?recur(cur+a[cur], a, mem):INT_MAX))+1;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    vector<int> mem(n, -1);
    int ans=recur(0, a, mem);
    cout<< ans;

}