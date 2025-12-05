#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    
    double ans = 100000;
    int price = -1, book=-1;
    for (int i=74; i<=144; i++) {
        for (int j=1000; j<=15000; j+=500) {
            double e = exp(0.09*(i-100));
            int pa = j*(100 - j/500 + 2);
            double s=((( (100.0-(0.8569*e)) *i)/100.0)*j) - (n + pa);
            if (s > 0) {
                if (s < ans) {
                    ans = s;
                    price=i;
                    book =j;
                }
            }
        }
    }
    cout<<fixed<<setprecision(2)<<book<< '\n'<<price<< '\n'<< ans;

}