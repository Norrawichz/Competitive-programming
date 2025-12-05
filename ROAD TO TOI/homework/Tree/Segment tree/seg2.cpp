#include <bits/stdc++.h>
using namespace std;

int s=1;

void update(int i, int key, vector<int> &seg) { 
    i+=s;
    while (i > 0) {
        seg[i]+=key;
        i/=2;
    }
}

int sm(int a, int b, vector<int> &seg) {
    a+=s;
    b+=s;

    int su=0;
    while (a <= b) {
        if (a%2) {
            su+=seg[a];
            a++;
        }
        a/=2;

        if (b%2 == 0) {
            su+=seg[b];
            b--;
        }
        b/=2;
    }
    return su;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n;
    cin>> n;

    while (s<n) s*=2;
    vector<int> seg(2*s, 0);

    for (int i=0; i<n; i++) {
        int a;
        cin>> a;
        update(i, a, seg);
    }


    for (int i=0; i<2*s; i++) {
        cout<< seg[i]<< ' ';
    }
    cout<< '\n'<< sm(2,5, seg);
}