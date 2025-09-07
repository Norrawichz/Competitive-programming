#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin>> m>> n;
    int arr[n][m];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            int x; cin>>x;
            arr[i][j] = x;
        }
    }
    
    for(int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n .ll ";
    }
    return 0;
}