#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int y,w;
    cin>> y>> w;
    int u=6-max(y,w)+1;
    int d=6;
    if (u%6==0) {
        cout<< 1<<'/'<<1;
    }
    else if (u%3==0) {
        cout<< u/3<<'/'<<d/3;
    }
    else if (u%2==0) {
        cout<< u/2<<'/'<<d/2;
    }
    else cout<< u<<'/'<<d;
}