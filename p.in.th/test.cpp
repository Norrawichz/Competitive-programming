#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  getline(cin, s);
  int l = s.length();
  vector<char> chr;
  for (int i = 0; i < l; i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
        chr.push_back(s[i]);
        i+= 2;
    }
    else chr.push_back(s[i]);
  }
  for (auto i : chr) {
    cout<< i;
  }
  return 0;
}