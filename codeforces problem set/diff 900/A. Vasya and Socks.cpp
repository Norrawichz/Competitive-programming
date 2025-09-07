#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    int day=0;
    while (n!=0) {
        n--;
        day++;
        if (day % m == 0) n++;
    }
    cout<< day;
}