#include <bits/stdc++.h>
using namespace std;

int position(int a[], int n, int val) {
    for (int i = 0; i<n; i++) {
        if (val == a[i]) {
            return i+1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>> n;

    int a[n];
    for (int i = 0; i<n; i++) {
        cin>> a[i];
    }

    double sum = 0;
    int mx = INT_MIN , mn = INT_MAX;
    for (auto x : a) {
        sum += x;
        
        mx = max(mx, x);
        mn = min(mn, x);
    }
    cout<<fixed <<setprecision(2);
    cout<<(sum)/n<<"\n";
    cout<<mx<<" "<<position(a, n, mx)<<"\n";
    cout<<mn<<" "<<position(a, n, mn);
    return 0;
}