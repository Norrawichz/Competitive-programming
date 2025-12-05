#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;

        int inf=0;
        for (int i=0; i<s.size(); i++) {
            if ((s[i] == '>' || s[i] == '*') && !inf) {
                inf=1;
            }
            else if ((s[i] == '<' || s[i] == '*')&& inf) {
                inf=2;
                break;
            }
        }
        
        if (inf == 2) {
            cout<< "-1\n";
            continue; 
        }

        int mx=0, cnt=0;
        char prv=s[0];
        for (int i=0; i<s.size(); i++) {
            if (s[i] == prv) cnt++;
            else if (s[i] == '*') {
                int j=i;
                while (s[j] == '*') {
                    cnt++;
                    j++;
                }
                mx=max(mx, cnt);
                cnt=1;
                prv=s[i];
            }
            else if (prv == '*') {
                int j=i;
                while (s[j] == s[i]) {
                    cnt++;
                    j++;
                }
                mx=max(mx, cnt);
                cnt=1;
                prv=s[i];
            } 
            else {
                mx=max(mx, cnt);
                cnt=1;
                prv=s[i];
            }
        }
        mx=max(mx,cnt);
        cout<< mx<< '\n';


    }
}