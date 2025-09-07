#include <bits/stdc++.h>
using namespace std;

bool isp(int s) {
    for (int i=2; i<s; i++) {
        if (s%i == 0) {
            return false;
        }
    }
    return true;
}

int gcd(int a, int b) {
    for (int i=max(a,b)-1; i>1; i--) {
        if (a % i == 0 && b%i == 0) return i;
    }
    return 1;
}
int n;
bool found = 0;
vector<bool> used;
vector<int> ans;
void bt(int cur) {
    for (int i=2; i<=n; i++) {
        if (!used[i] && gcd(cur, i) != 1) {
            ans[cur] = i;
            while (ans[cur] != 0) {
                cur++;
                if (cur >= n-1) {
                    found = true;
                }
            }
            if (found) return;
            bt(cur);
        }
    }
}

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        cin>> n;
        ans.resize(n, 0);
        used.resize(n+1, 0);
        ans[0] = 1;
        for (int i=n; i>0; i--) {
            for (int j=n; j>0; j--) {
                if (j == i && j*2 > n && isp(j)) {
                    ans[i-1] = j;
                    used[j] = 1;
                    break;
                }
            }
        }
        for (int i=n-1; i>0; i--) {
            if (ans[i] == 0) {
                bt(i);
            }
        }
        for (auto x : ans) {
            cout<< x<< " ";
        }
        cout<<endl;
    }
}