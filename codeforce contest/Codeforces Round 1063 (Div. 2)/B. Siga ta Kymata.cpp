
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        string s;
        
        cin>>n;
        
        int a[n],mn,mx;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            if (a[i] == 1) mn=i;
            if (a[i] == n) mx=i;
        }
        cin>> s;
        
        if (s[0] == '1' || s[n-1] == '1' || s[mn] == '1' || s[mx] == '1') {
            cout<< -1<< '\n';
            continue;
        }
        mn++;
        mx++;
        
        cout<< "5 \n";
        cout<< "1 "<< mn<< '\n';
        cout<< "1 "<< mx<< '\n';
        cout<< mn << " "<< n<< '\n';
        cout<< mx << " "<< n<< '\n';
        cout<< min(mx,mn) << " "<< max(mx,mn)<< '\n';
    }
}