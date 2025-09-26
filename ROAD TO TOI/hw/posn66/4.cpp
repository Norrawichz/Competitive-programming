#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c;
    cin>> a>> b>> c;

    int ans=0;
    if (c-7 > 0) ans+=c-7;
    if (c+7 < a) ans+=c+7;
    int s=b-2;
    if ((c-1+s)/7 == (c+s)/7) ans+=c-1;
    if ((c+1+s)/7 == (c+s)/7) ans+=c+1;
    cout<< ans;
}