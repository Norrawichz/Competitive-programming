#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,cnt=0;
        cin>> n;
        bool valid=1;
        while (n!=1) {
            if (n%6==0) {
                n/=6;
                cnt++;
            }
            else if (n%3==0){
                n*=2;
                cnt++;
            }
            else {
                cout<<-1<<endl;
                valid=0;
                break;
            }
        }
        if (valid) cout<< cnt<<endl;
    }
}