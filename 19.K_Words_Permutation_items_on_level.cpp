#include<bits/stdc++.h>
using namespace std;
void generateWords(string str, int cs, string asf, int k, vector<bool>&used)
{
  if (cs > k) {
    cout << asf << endl;
    return;
  }

  for (int i = 0; i < str.length(); i++) {
    if (used[i] == false)
    {
      used[i] = true;
      char ch = str[i];
      generateWords(str, cs + 1, asf + ch, k, used);
      used[i] = false;
    }
  }

}
void single()
{
  string str = "aabbcc";
  set<char>hash;
  int k = 2;
  string q = "";
  for (auto i : str) {
    if (hash.find(i) == hash.end()) {
      hash.insert(i);
      q += i;
    }
  }
  int n = str.length();
  vector<bool>used(n, false);
  generateWords(q, 1, "", k, used);
}
int main()
{
  single();
}