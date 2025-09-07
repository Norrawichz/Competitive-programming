#include <bits/stdc++.h>
using namespace std;
#define ul unsigned long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ul n, m, a;
    cin>> n>> m>> a;
    ul len1 = (m+a-1) / a;
    ul len2 = (n+a-1) / a;
    cout<< len2 * len1;
}