#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        string s;
        cin>> n>> s;

        int a=0,b=0;
        for (int i=0; i<n; i++) {
            if (s[i] == 'a') a++; 
            else b++;
        }
        if (a==b) {
            cout<< 0<< "\n";
            continue;
        }
        if (a==0 || b==0) {
            cout<< -1<< "\n";
            continue;
        }
        
        int cnt[n+1]={};
        cnt[0]=1;
        cnt[n]=1;
        for (int i=1; i<n; i++) {
            if (s[i]==s[i-1]) cnt[i]=cnt[i-1]+1;
            else cnt[i]=1;
        }
        int ans=INT_MAX;
        for (int i=0; i<n; i++) {
            if (s[i] == 'a') {
                if (a-cnt[i] == b) {
                    ans=min(cnt[i], ans);
                }
            }
            else if (s[i] == 'b') {
                if (b-cnt[i] == a) {
                    ans=min(cnt[i], ans);
                }
            }
        }

        cout<< (ans != INT_MAX ? ans : -1);
        cout<< "\n";
    }
}