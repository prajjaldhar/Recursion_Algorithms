// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
void getpermutation(int cs, int ts, int freq1[], string asf)
{
	if (cs > ts)
	{
		cout << asf;
		cout << "\n";
		return;
	}
	for (int i = 0; i < 26; ++i)
	{
		if (freq1[i] > 0)
		{
			freq1[i]--;
			getpermutation(cs + 1, ts, freq1, asf + char(97 + i));
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
		string str1 = "aabb";
		int freq1[26];
		memset(freq1, 0, sizeof freq1);
		int n = str1.length();
		for (int i = 0; i < str1.length(); ++i) {
			freq1[str1[i] - 'a']++;
		}
		getpermutation(1, n, freq1, "");
	}
	return 0;
}
