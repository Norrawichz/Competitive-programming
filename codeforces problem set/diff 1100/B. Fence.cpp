#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin>> n>> k;
    int a[n], minsum=0, j=0;
    for (int i=0; i<n; i++) cin>> a[i];
    for (int i=0; i<k; i++) minsum+=a[i];
    
    int sum =minsum;
    for (int i=k; i<n; i++) {
        sum += a[i] - a[i-k];
        if (sum < minsum) {
            j=i-k+1;
            minsum = sum;
        }
    }
    cout<< j+1;
}