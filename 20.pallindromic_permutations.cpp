// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
void getpermutation(int cs, int ts, int freq1[], string extra, string asf)
{
	if (cs > ts)
	{
		string res = asf;
		if (extra != "")
			res += extra;
		res += string(asf.rbegin(), asf.rend());
		cout << res << "\n";
		return;
	}
	for (int i = 0; i < 26; ++i)
	{
		if (freq1[i] > 0)
		{
			freq1[i]--;
			getpermutation(cs + 1, ts, freq1, extra, asf + char(97 + i));
			freq1[i]++;
		}
	}
}
// Driver code
int main()
{

	int t ;
	cin >> t;
	while (t--) {
		string str1 = "aaaabbbbc";
		int freq1[26];
		string extra = "";
		int odd = 0, len = 0;
		memset(freq1, 0, sizeof freq1);
		for (int i = 0; i < str1.length(); ++i) {
			freq1[str1[i] - 'a']++;
		}
		for (int i = 0; i < 26; ++i)
		{
			if (freq1[i] % 2 == 1) //finding odd char
			{
				extra = char(97 + i);
				odd++;
			}
			if (freq1[i] > 0)
			{
				len += freq1[i] / 2;
				freq1[i] = freq1[i] / 2;

			}
		}
		// cout <<extra << " ";
		// cout << len << "\n";
		// for (int i = 0; i < str1.length(); ++i)
		// {
		// 	cout << freq1[i] << " ";
		// }
		if (odd > 1) {
			cout << "Invalid";
			return -1;
		}
		getpermutation(1, len, freq1, extra, "");
	}
	return 0;
}
