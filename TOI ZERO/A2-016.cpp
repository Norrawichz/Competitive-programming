#include <iostream>
using namespace std;

int main() {
    char input_c, result_c;
    string input_num, result_num;
    cin>> result_c>> result_num;
    cin>> input_c>> input_num;
    
    if (input_c == result_c && input_num == result_num) cout<< 1000000;
    else if (input_num == result_num) cout<< 100000;
    else if (input_num.substr(2,5) == result_num.substr(2,5) && input_c == result_c) cout<< 2000;
    else if (input_num.substr(3,5) == result_num.substr(3,5) && input_c == result_c) cout<< 1000;
    else if (input_num.substr(2,5) == result_num.substr(2,5)) cout<< 200;
    else if (input_num.substr(3,5) == result_num.substr(3,5)) cout<< 100;
    else if (input_c == result_c) cout<< 20;
    else cout<< 0;
    return 0;
}