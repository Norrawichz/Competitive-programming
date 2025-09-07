#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    cout<< "I hate ";
    for (int i=1; i<n; i++) {
        if (i%2 == 0) cout<< "that I hate ";
        else cout<< "that I love ";
    }
    cout<< "it";
}