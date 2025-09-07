#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    
    int capa[3], amou[3];
    for (int i=0; i<3; i++) cin>> capa[i]>> amou[i];
    int i=0;
    while (i < 100) {
        int nxt=(i%3+1==3? 0:i%3+1);
        if (amou[nxt] + amou[i%3] <= capa[nxt]) {
            amou[nxt] += amou[i%3];
            amou[i%3] = 0;
        }
        else {
            amou[i%3] = amou[nxt] + amou[i%3] - capa[nxt];
            amou[nxt] = capa[nxt];
        }
        i++;
    }
    for (int i=0; i<3; i++) cout<< amou[i]<<endl;
}