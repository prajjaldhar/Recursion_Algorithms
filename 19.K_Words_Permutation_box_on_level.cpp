#include<bits/stdc++.h>
using namespace std;

void generate_Words(int cs, string str, int ssf, int ts, char spots[]) {
  if (cs == str.size())
  {
    if (ssf == ts)
      cout << spots << endl;
    return;
  }
  char ch = str[cs];

  for (int i = 0 ; i < ts; i++)
  {
    if (spots[i] == ' ') {
      spots[i] = ch;
      generate_Words(cs + 1, str, ssf + 1, ts, spots);
      spots[i] = ' ';
    }
  }
  generate_Words(cs + 1, str, ssf + 0, ts, spots);
}

int main() {

  int t ;
  cin >> t;
  while (t--) {
    string s = "abcabc";
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
    char spots[k];
    memset(spots, ' ', k);
    spots[k] = '\0';
    generate_Words(0, q, 0, k, spots);
  }
  return 0;
}

