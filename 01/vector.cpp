#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,6,4,4,5,7,2,3};
    auto it = nums.begin();
    nums.insert(it+1, 60);
    for (auto i : nums) cout<< i<< " ";
    return 0;
}