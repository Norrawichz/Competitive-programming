#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,e;
    cin>> a>>b>>c>>d;
    cout<< max(max(a,b),max(c,d))<< " "<< min(min(a,b),min(c,d));
}