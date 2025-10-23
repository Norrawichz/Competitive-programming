#include <bits/stdc++.h>
using namespace std;

int main() {
    int d,p,k,m;
    string s;
    cin>> d>> p>> k>> m>> s;


    int yak=p, ghost=k, id=p;
    while (true) {
        if (s[id-1] == '-') {
            yak+=p;
            id+=p;
            ghost+=k;
        }
        else if (s[id-1] == 'X') {
            yak+=m;
            id+=m;
            ghost+=k;
        }
        else if (s[id-1] == 'P') {
            yak+=p;
            id+=p;
        }

        if (yak <= ghost) {
            cout<< "NO "<< yak;
            break;
        }
        if (yak >= d) {
            cout<< "YES "<< yak-ghost;
            break;
        }
    }
}