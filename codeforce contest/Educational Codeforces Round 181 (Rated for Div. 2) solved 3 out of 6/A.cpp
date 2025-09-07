#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;
        if (s.size() < 3) {
            cout<< s<< endl;
            continue;
        }
        bool f=1;
        for (int i=0; i<s.size()-2; i++) {
            if (s[i] == 'F' && s[i+1] == 'F' && s[i+2] == 'T') {
                sort(s.begin(), s.end());
                reverse(s.begin(),s.end());
                cout<< s<<endl;
                f=0;
                break;
            }
            else if (s[i] == 'N' && s[i+1] == 'T' && s[i+2] == 'T') {
                sort(s.begin(), s.end());
                reverse(s.begin(),s.end());
                cout<< s<<endl;
                f=0;
                break;
            }
        }
        if (f) cout<< s<< endl;
    }
}