#include<bits/stdc++.h>
using namespace std;
int counter = 0;
int getStairCase(int n, string ans)
{
	if (n == 0)
	{
		// cout << ans << " ";
		counter++;
		return counter;
	}
	if (n < 0)
	{
		return -1;
	}
	getStairCase(n - 1, ans + to_string(1) + "-");
	getStairCase(n - 2, ans + to_string(2) + "-");
	getStairCase(n - 3, ans + to_string(3) + "-");
	return counter;

}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ans = getStairCase(n, "");
		cout << ans;

	}
}