#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int real_gcd = INT_MIN;
    for (int i = 1; i<=min(a,b); i++){
        if(a%i == 0 && b%i == 0){
            real_gcd = i;
        }
    }
    return real_gcd;
}
int main(){
    int a = 50;
    int b = 25;
    cout<< gcd(a,b);
    return 0;
}