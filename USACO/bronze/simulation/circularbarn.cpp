#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    int n;
    cin>> n;
    int arr[n];
    for (int i=0; i<n; i++) cin>> arr[i];
    int mn=INT_MAX;
    for (int i=0; i<n; i++) {
        int sm=0, mul=1;
        for (int j=i+1; j<n; j++) {
            sm+= arr[j]*mul;
            mul++;
        }
        for (int j=0; j<i; j++) {
            sm+= arr[j]*mul;
            mul++;
        }
        mn=min(mn,sm);
    }
    cout<< mn;
}