#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string s = "name";
    string text = "nsiopnaioynme";
    int index = -1;

    for (int i = 0; i<=text.length() - s.length(); i++){
        int j;
        for (j = 0; j<s.length(); j++){
            if (text[i + j] != s[j]) break;
        }
        if (j == s.length()) {
            index = i;
            break;
        }
    }
    if (index != -1) cout<< "Found";
    else cout<< "Not found";

    return 0;
}