#include <iostream>
using namespace std;

int main(){
    int n, start = 65;
    cin>> n;
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=n; j++) {
            cout<< char(start)<< " ";
            start++;
            if (start == 91) start = 65;
        }
        cout<<"\n";
    }
    return 0;
}