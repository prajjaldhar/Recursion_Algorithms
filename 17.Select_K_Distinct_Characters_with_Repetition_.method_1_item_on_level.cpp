
#include<bits/stdc++.h>
using namespace std;

void generate_Words(int cs, string str, int ssf, int ts, string asf) {
  if (cs == str.size()) {
    if (ssf == ts) {
      cout << asf << "\n";
    }
    return;
  }
  char ch = str[cs];
  generate_Words(cs + 1, str, ssf + 1, ts, asf + ch);
  generate_Words(cs + 1, str, ssf, ts, asf);

}

int main() {

  int t ;
  cin >> t;
  while (t--) {
    string s = "aabbcc";
    set <char> str;
    string q = "";
    for (auto i : s) {
      if (str.find(i) == str.end()) {
        str.insert(i);
        q += i;
      }
    }
    // permutations(0, nboxes,items, 0, ritems,"");
    // for (auto i : str)
    //     cout << i << " ";
    int k = 2;
    generate_Words(0, q, 0, k, "");
  }
  return 0;
}

