#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>> n;
    long long s = ((n+1)*(n))/2;
    if (s % 2 == 1) {
        cout<< "NO";
    }
    else {
        vector<int> s1, s2;
        long long target = s/2;
        for (int i=n; i>=1; i--) {
            if (target >= i) {
                s1.push_back(i);
                target -= i;
            }
            else {
                s2.push_back(i);
            }
        }
        cout<< "YES"<< endl;
        cout<< s1.size()<< endl;
        for (auto x : s1) cout<< x<< " ";
        cout<< endl;
        cout<< s2.size()<< endl;
        for (auto x : s2) cout<< x<< " ";
        cout<< endl;
        
    }

}