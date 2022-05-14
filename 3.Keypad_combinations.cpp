// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

string codes[] = {"?!", "abc", "def", "ghi", "jkl", "mnop", "qrst", "uv", "wxyz", ".,"};
//int j=0;



void printkeycode(string sub, string ans)
{

  if (sub.length() == 0) {
    cout << ans << " ";
    return;
  }

  // First character of sub
  char ch = sub[0];

  // Sub-string starting from second
  // character of sub
  string ros = sub.substr(1);

  string codeforeach = codes[ch - '0'];

  for (int i = 0; i < codeforeach.length(); i++) {
    char chcode = codeforeach[i];
    printkeycode(ros, ans + chcode);
  }
}

// Driver code
int main()
{
  int t ;
  cin >> t;
  while (t--) {
    string str;
    cin >> str;
    printkeycode(str, "");
    cout << "\n \n \n";
  }
  return 0;
}
