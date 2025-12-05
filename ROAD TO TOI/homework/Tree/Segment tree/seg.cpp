#include <bits/stdc++.h>
using namespace std;

int s=8;

void update(int i, int key, vector<int> &seg) { 
    i+=s;
    while (i > 0) {
        seg[i]+=key;
        i/=2;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    vector<int> seg = {0, 36, 17, 19, 9, 8, 11, 8, 1, 8, 7, 1, 2, 9, 2, 6};

    update(3, 3, seg);
    for (int i=0; i<16; i++) cout<< seg[i]<< ' ';
}