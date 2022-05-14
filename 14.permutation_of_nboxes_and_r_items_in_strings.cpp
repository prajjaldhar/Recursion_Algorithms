#include<bits/stdc++.h>
using namespace std;
void generateWords(int cc, string s, char spots[], map<char, int> &hash)
{
  if (cc == s.length())
  {
    cout << spots << endl;
    return;
  }

  char ch = s[cc];
  int lo = hash[ch];

  for (int i = lo + 1; i < s.size(); i++)
  {
    if (spots[i] == ' ') {
      spots[i] = ch;
      hash[ch] = i;
      generateWords(cc + 1, s, spots, hash);
      hash[ch] = lo;
      spots[i] = ' ';
    }

  }
}
void single()
{
  string str = "aabb";
  //cin >> s;
  map<char, int> hash;
  char spots[str.size()];
  memset(spots, ' ', str.size());
  spots[str.size()] = '\0';
  for (auto x : str) {
    hash[x] = -1;
  }

  generateWords(0, str, spots, hash);
}
int main()
{
  single();
}