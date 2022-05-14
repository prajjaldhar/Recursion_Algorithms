#include<bits/stdc++.h>
using namespace std;
void coinChange(vector<int>&arr, string set, int sum, int tsum, int n)
{
	if (sum > tsum)
		return;
	if (sum == tsum)
		cout << set << "\n";
	for (int i = 0; i < n; i++)
	{

		coinChange(arr, set + to_string(arr[i]) + "-", sum + arr[i], tsum, n);
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int sum = 0, tsum = 12, n = 5;
		vector<int>arr = {2, 3, 5, 7, 9};
		string set = "";
		coinChange(arr, set, sum, tsum, n);
	}
}