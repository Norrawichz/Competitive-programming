#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int x,y;
    cin>> x>> y;
    int totaldis=0, dis=1, dir=1;
    while (true) {
        if ((dir == 1 && x <= y && x + dis >= y) || (dir==-1 && y <= x && x - dis <= y)) {
            totaldis += abs(x-y);
            break;
        }
        else {
            totaldis += dis*2;
            dis*=2;
            dir*=-1;
        }
    }
    cout<< totaldis;

}