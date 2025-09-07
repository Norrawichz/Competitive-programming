#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n,mx=0;
        cin>> n;
        string r1, rn;
        bool vst[n]={};
        cin>> r1>> rn;
        for (int i=0; i<n; i++) {
            if (rn[i] == '0') continue;
            else {
                if (r1[i] == '0' && !vst[i]) {
                    mx++;
                    vst[i] = 1;
                }
                else if (i-1 >= 0 && r1[i-1] =='1' && !vst[i-1]) {
                    mx++;
                    vst[i-1] = 1;
                }
                else if (r1[i+1] == '1' && !vst[i+1]) {
                    mx++;
                    vst[i+1] = 1;
                }
            }
        }
        cout<< mx<<endl;
    }
}