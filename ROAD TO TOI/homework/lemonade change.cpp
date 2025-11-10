#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int> a(21, 0);
    for (int i=0; i<bills.size(); i++) {
        if (bills[i] == 5) a[5]++;
        else if (bills[i] == 10) {
            a[5]--;
            a[10]++;
            if (a[5] < 0) return 0;
        }
        else {
            int mn=min(a[5],a[10]);
            if (mn != 0) {
                a[5]--;
                a[10]--;
            }
            else if (a[5] >= 3) a[5] -= 3;
            else return 0;
        }
    }
    return 1;
}