#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    double x[n], y[n];
    for (int i = 0; i<n; i++) {
        cin>> x[i]>> y[i];
    }
    double mx = 0; 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            for (int k = 0; k<n; k++) {
                if (i != j && i != k && j != k) {
                    mx = max(mx, abs(x[i]*y[j] + x[j]*y[k] + x[k]*y[i] - x[j]*y[i] - x[k]*y[j] - x[i]*y[k]) / 2);
                }
            }
        }
    }
    printf("%.3f",mx);
    return 0;
}