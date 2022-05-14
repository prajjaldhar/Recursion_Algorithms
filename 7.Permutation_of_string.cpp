#include<bits/stdc++.h>
using namespace std;
void permutation_string(string str, string ans)
{
	if (str.length() == 0)
	{
		cout << ans << " ";
		return;
	}
	for (int i = 0; i < str.length(); i++)
	{
		char ch = str[i];
		string ros = str.substr(0, i) + str.substr(i + 1);
		permutation_string(ros, ans + ch);
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str = "abc";
		permutation_string(str, "");
	}
}