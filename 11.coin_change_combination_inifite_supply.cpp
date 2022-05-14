#include<bits/stdc++.h>
using namespace std;
void inf_supp_coin_Sum(vector<int>&arr, int indx, string set, int sum, int tsum, int n)
{
	//base case:
	if (sum > tsum)
		return;
	if (indx == n)
	{
		if (sum == tsum)
			cout << set << "\n";
		return;
	}

	//yes call
	for (int i = tsum / arr[indx]; i >= 1 ; i--)
	{
		string s = "";
		for (int j = 0; j < i; j++)
		{
			s += to_string(arr[indx]) + "-";
		}
		inf_supp_coin_Sum(arr, indx + 1, set + s, sum + (arr[indx]*i), tsum, n);
	}
	//no call
	inf_supp_coin_Sum(arr, indx + 1, set, sum, tsum, n);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int sum = 0, indx = 0 , tsum = 7, n = 3;
		vector<int>arr = {2, 3, 5};
		string set = "";
		inf_supp_coin_Sum(arr, indx, set, sum, tsum, n);
	}
}