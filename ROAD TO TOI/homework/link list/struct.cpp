#include <bits/stdc++.h>
using namespace std;

struct product {
    int w;
    float p;
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    product apple;

    product *ptr;
    //ptr = &apple;
    ptr = new product;
    ptr->p = 20;
    (*ptr).w = 5;

    cout<< ptr->p;
    //cout<< &apple<< ' '<< &(apple.p) <<' '<< &(apple.w);
}