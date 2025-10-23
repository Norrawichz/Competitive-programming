#include <bits/stdc++.h>
using namespace std;

#define ll long long

int size_l, size_r;
ll val_l, val_r, val_tem, ans=0;
string pick = "01869";

 // mid -> 0,1,8 not mid -> 6,9 -> 689, 609, 111 took roi per sen krub
void find(string cur, int n) {
    if (cur.size() == (n+1)/2) {
        val_tem=0;

        for (int i=0; i<cur.size(); i++) {
            val_tem*=10;
            val_tem+=cur[i]-'0';
        }
        for (int i=cur.size() + (n%2==1 ? -2:-1); i>=0; i--) {
            val_tem*=10;
            val_tem+=cur[i]-'0';
        }

        if (val_l <= val_tem && val_tem <= val_r) {
            ans++;
        }
        return;
    }

    for (int i=0; i<5; i++) {
        if (cur.empty() && i==0) continue;

        if (n%2==1  && n/2 == cur.size() && (i==0 || i== 1 || i==2)) {
            find(cur+pick[i], n);
        }
        else if (n/2 != cur.size()) {
            find(cur+pick[i], n);
        }
    }
}

int main() {
    string l,r;
    cin>> l>> r;

    size_l = l.size();
    size_r = r.size();

    for (int i=0; i<l.size(); i++) {// todecimaliw
        val_l*=10;
        val_l+=l[i]-'0';
    }
    for (int i=0; i<r.size(); i++) {// todecimal
        val_r*=10;
        val_r+=r[i]-'0';
    }
    

    for (int i=size_l; i<=size_r; i++) {
        string c="";
        find(c, i);
    }
    if (val_l <= 0 && val_r>=0) ans++;
    cout<< ans;
}