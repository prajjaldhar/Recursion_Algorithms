#include<bits/stdc++.h>
using namespace std;
int counter = 0;
int targetSum(vector<int>&arr, int indx, string set, int sum, int tsum, int n)
{
	if (indx == n)
	{
		if (sum == tsum) {
			cout << set << "\n";
			counter++;
		}
		return counter;
	}
	//yes call
	targetSum(arr, indx + 1, set + to_string(arr[indx]) + "-", sum + arr[indx], tsum, n);
	//no call
	targetSum(arr, indx + 1, set, sum, tsum, n);

	return counter;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int indx = 0, sum = 0, tsum = 12, n = 4;
		vector<int>arr = {2, 3, 5, 7};
		string set = "";
		int ans = targetSum(arr, indx, set, sum, tsum, n);
		cout << ans;

	}
}