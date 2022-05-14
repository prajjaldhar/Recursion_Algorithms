#include<bits/stdc++.h>
using namespace std;
void getSubsequence(string s, string set)
{
	if (s.length() == 0)
	{
		cout << set;
		cout << "\n";
		return;
	}
	char fss = s[0];
	string ros = s.substr(1);
	getSubsequence(ros, set + fss);
	getSubsequence(ros, set + "_");
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s = "abc";
		string set = "";
		getSubsequence(s, set);
	}
}