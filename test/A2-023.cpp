#include <iostream>
#include <algorithm>
using namespace std;

int maxA(string ss) {
    int maxCount = 0;
    for (size_t i = 0; i < ss.size(); i++) {
        if (ss[i] == 'r') {
            int count = 0;
            for (size_t j = i + 1; j < ss.size(); j++) {
                if (ss[j] == 'a') {
                    count++;
                } else {
                    break;
                }
            }
            maxCount = max(maxCount, count);
        }
    }
    return maxCount;
}

int findindex(string ss) {
    for (size_t i = 0; i + 1 < ss.size(); i++) {
        if ((ss[i] == 'r' && ss[i + 1] != 'a') ||
            (i + 2 == ss.size() && ss[i + 1] == 'r') ||
            (i + 2 == ss.size() && ss[i + 1] == 'b') ||
            (ss[i] != 'r' && ss[i] != 'a' && ss[i + 1] == 'a') ||
            (ss[i] == 'b' && ss[i + 1] != 't' && ss[i + 1] != 'i')) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    if (s.empty()) {
        cout << "no 0";
        return 0;
    }

    string ss = s;
    transform(ss.begin(), ss.end(), ss.begin(), ::tolower);

    int pure = 0;
    for (size_t i = 0; i + 1 < ss.size(); i++) {
        if ((ss[i] == 'r' && ss[i + 1] != 'a') ||
            (i + 2 == ss.size() && ss[i + 1] == 'r') ||
            (i + 2 == ss.size() && ss[i + 1] == 'b') ||
            (ss[i] != 'r' && ss[i] != 'a' && ss[i + 1] == 'a') ||
            (ss[i] == 'b' && ss[i + 1] != 't' && ss[i + 1] != 'i')) {
            pure = 1;
            break;
        }
    }

    for (size_t i = 0; i < ss.size(); i++) {
        if (ss[i] != 'i' && ss[i] != 't') {
            break;
        }
        else if (i == ss.size() - 1) pure = 2;
    }
    if (pure == 0) {
        cout << "yes " << maxA(ss);
    } else if (pure == 1) {
        cout << "no " << findindex(ss);
    } else if (pure == 2){
        cout << "unknown " << ss.size();
    }

    return 0;
}
