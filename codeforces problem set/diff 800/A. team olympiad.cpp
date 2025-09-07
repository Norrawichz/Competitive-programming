#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int n;
    cin>> n;
    int f1=0,f2=0,f3=0, mn=INT_MAX;
    vector<pair<int,int>> a(n);
    for (int i=0; i<n; i++) {
        cin>> a[i].first;
        a[i].second = i+1;
        if (a[i].first == 1) f1++;
        else if (a[i].first == 2) f2++;
        else f3++;
    }
    mn = min({f1,f2,f3});
    cout<< mn<<endl;
    sort(a.begin(), a.end());
    for (int i=0, j=f1, k=f1+f2; i<mn; i++, k++, j++) {
        cout<< a[i].second<< " "<< a[j].second<< " "<< a[k].second<< endl;
    }
}  