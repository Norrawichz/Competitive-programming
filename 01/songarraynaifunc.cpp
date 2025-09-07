#include <bits/stdc++.h>
#include <array>
#include <math.h>
using namespace std;

void change(vector<int> arr){
    for(auto i : arr){
        cout<< pow(i, 2)<< " ";
    } 
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    change(nums);
    return 0;
}