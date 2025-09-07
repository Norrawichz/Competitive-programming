#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, vowels_count=0;
    cin>>n;
    string name[n];
    char vowels[] ={'a','e','i','o','u','A','E','I','O','U'};

    for(size_t i = 0; i<n; i++){
        cin>> name[i];
    }
    for(size_t i = 0; i<n; i++){
        for(size_t j = 0; j<name[i].length(); j++){
            for(size_t vo = 0; vo<sizeof(vowels)/sizeof(vowels[0]); vo++){
                if(name[i][j] == vowels[vo]){
                    vowels_count++;
                }
            }
        }
    }
    cout<< vowels_count;
    return 0;
}
