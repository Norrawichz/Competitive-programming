#include <iostream>
using namespace std;

int main() {
    int w, l, layer;
    int costpermetres;
    cin>> w>> l>> layer;
    cin>> costpermetres;
    int total_l = (2*(w + l)) * layer;
    cout<<total_l<<endl;
    cout<<total_l * costpermetres;
    return 0;
    
}