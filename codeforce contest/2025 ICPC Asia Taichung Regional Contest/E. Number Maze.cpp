#include <bits/stdc++.h>
using namespace std;

vector<string> ans;
int nn;

void permu(int mask, string tem, string n) {
    if (!mask) {
        ans.push_back(tem);
        return;
    }

    for (int i=0; i<nn; i++) {
        if (mask & (1<<i)) {
            permu(mask^(1<<i), tem+n[i], n);
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        ans.clear();

        string n;
        cin>> n;

        int a,b;
        cin>> a>> b;

        nn=n.size();

        permu((1<<nn)-1, "", n);
        
        string aa=ans[a-1], bb=ans[b-1];
        int x=0;
        for (int i=0; i<nn; i++) {
            if (aa[i] == bb[i]) x++;
        }
        cout<< x<<"A"<<nn-x<<"B\n";


    }
}