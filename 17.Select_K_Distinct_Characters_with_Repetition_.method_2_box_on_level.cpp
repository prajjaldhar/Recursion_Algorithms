#include<bits/stdc++.h>
using namespace std;
void generate_Words(int cs, string str, int lo, int ts, string asf) {
  if (cs > ts) {
    cout << asf << "\n";
    return;
  }
  for (int i = lo + 1; i < str.size(); ++i)
  {
    char ch = str[i];
    generate_Words(cs + 1, str, i, ts, asf + ch);
  }


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
    // cout << q << " ";
    // for (auto i : str)
    //   cout << i << " ";
    int k = 2;
    generate_Words(1, q, -1, k, "");
  }
  return 0;
}

