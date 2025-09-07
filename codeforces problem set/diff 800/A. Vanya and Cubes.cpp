#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,ans=0, cur=1,i=2;
    cin>> n;

    while (n > 0) {
        if (n >= cur) {
            n-=cur;
            ans++;
        }
        else {
            break;
        }
        cur+=i;
        i++;
    }
    cout<< ans;
}