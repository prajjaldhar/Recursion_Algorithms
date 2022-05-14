#include<bits/stdc++.h>
using namespace std;
void combination(int cs, string str, int ts, string asf) {
  if (cs == ts) {
    cout << asf << " ";
    cout << endl;
    return;
  }
  char ch = str[cs];
  combination(cs + 1, str, ts, asf + ch);
  combination(cs + 1, str, ts, asf);

}
int main() {

  int t ;
  cin >> t;
  while (t--) {
    string s = "123";

    // permutations(0, nboxes,items, 0, ritems,"");
    // for (auto i : str)
    //     cout << i << " ";
    int n = s.length();
    combination(0, s, n , "");
  }
  return 0;
}

