#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;
    int up=0, lo=0;
    for (auto x : s) {
        if (x > 'Z') lo++;
        else up++;
    }
    if (lo >= up) transform(s.begin(), s.end(),  s.begin(), ::tolower);
    else transform(s.begin(), s.end(),  s.begin(), ::toupper);
    cout<< s;
}