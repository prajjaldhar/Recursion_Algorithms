// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

void wordBreak(string str, string ans, vector<string>&dict) {
  if (str.length() == 0) {
    cout << ans;
    cout << endl;

    return;
  }
  for (int i = 0; i < str.length(); i++)
  {
    string prefix = str.substr(0, i + 1);
    //cout<<left<<" ";
    for (int j = 0; j < dict.size(); j++)
    {
      if (dict[j] == prefix)
      {
        string ros = str.substr(i + 1);
        wordBreak(ros, ans + "-" + prefix, dict);
      }
    }
  }

}

// Driver code
int main()
{

  int t ;
  vector<string>dict = {"micro", "soft", "hi", "ring", "hiring", "microsoft"};
  string str = "microsofthiring";
  wordBreak(str, "", dict);
  return 0;
}
