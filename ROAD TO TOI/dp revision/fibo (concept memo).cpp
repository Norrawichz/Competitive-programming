#include <bits/stdc++.h>
using namespace std;

int mem[7]={};


int fibo(int n) {
    if (n<=1) return n;
    if (mem[n] != 0) return mem[n];
    return fibo(n-1) + fibo(n-2);
}
int main() {
    mem[0]=0;
    mem[1]=1;
    cout<< fibo(6)<< "\n";
}