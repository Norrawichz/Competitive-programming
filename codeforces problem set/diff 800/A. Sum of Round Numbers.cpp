#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;
        int n=0;
        for (auto x : s) if (x!='0') n++;
        cout<< n<<endl;
        for (int i=1; i<=s.size(); i++) {
            if (s[i-1]!='0') {
                cout<< s[i-1];
                for (int j=1; j<=s.size()-i; j++) cout<<'0';
                cout<< " ";
            }
        }
        cout<< endl;
    }
}