#include<bits/stdc++.h>
using namespace std;
bool isPallindrome(string prefix)
{
	string rev = string(prefix.rbegin(), prefix.rend());
	if (prefix == rev)
		return true;
	else
		return false;
}
void pallindromic_partition(string str, string asf)
{
	if (str.length() == 0)
	{
		cout << asf << " ";
		cout << "\n";
		return;
	}
	for (int i = 0; i < str.length(); ++i)
	{
		string prefix = str.substr(0, i + 1);
		string ros = str.substr(i + 1);
		if (isPallindrome(prefix))
		{
			pallindromic_partition(ros, asf + "(" + prefix + ")");
		}

	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str = "abaaba";
		pallindromic_partition(str, "");
	}
}