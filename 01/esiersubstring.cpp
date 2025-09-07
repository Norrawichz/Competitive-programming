#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1,2,3,5,1,6,8,3};
    int check;
    cin>> check;
    for(auto i : nums){
        int x = check - i;
        if( find(nums.begin(), nums.end(), x) != nums.end()){
            cout<< i<< " "<< x;
            cout<< endl;
        }
    }
    return 0;
}