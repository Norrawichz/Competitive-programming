#include <bits/stdc++.h>
using namespace std;

struct each {
    double value;
    double weight;
    double vw;
};

bool compare(each a, each b) {
    return a.vw > b.vw;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    double w;
    cin>> n>> w;
    vector<each> arr(n);
    for (int i = 0; i<n; i++) cin>> arr[i].weight;
    for (int i = 0; i<n; i++) cin>> arr[i].value;
    for (int i = 0; i<n; i++) arr[i].vw = arr[i].value/arr[i].weight;
    sort(arr.begin(), arr.end(), compare);

    double total_v = 0;
    for (int i = 0; i<n && w > 0; i++) {
        if (w > arr[i].weight) {
            total_v += arr[i].value;
            w -= arr[i].weight;
        }
        else {
            total_v += arr[i].vw * w;
            w = 0;
        }
    }
    printf("%.6f", total_v);
    return 0;
}