#include <bits/stdc++.h>
using namespace std;

bool check(int m, int s) {
    return s>=0 && s<=9*m;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int m,s;
    cin>> m>> s;
    
    if (!check(m, s) || (s==0 && m != 1)) {
        cout<< "-1 -1";
        return 0;
    }
    string mn="", mx="";
    int sm=s;
    for (int i=0; i<m; i++) {
        for (int d=0; d<10; d++) {
            if ((i>0 || d>0 || (m==1 && d==0)) && check(m-i-1, sm-d)) {
                mn+=char('0'+d);
                sm-=d;
                break;
            }
        }
    }
    for (int i=0; i<m; i++) {
        for (int d=9; d>=0; d--) {
            if (check(m-i-1, s-d)) {
                mx+=char('0'+d);
                s-=d;
                break;
            }
        }
    }
    cout<< mn<< " "<< mx;
}