#include<bits/stdc++.h>
using namespace std;
void PrintSubsequence(int indx, vector<int>&ds, int arr[], int n)
{
	if (indx == n)
	{
		for (auto it : ds)
			cout << it << " ";
		if (ds.size() == 0)
			cout << "{}";
		cout << "\n";
		return;
	}

	//not picking
	PrintSubsequence(indx + 1, ds, arr, n);

	ds.push_back(arr[indx]);
	PrintSubsequence(indx + 1, ds, arr, n);
	ds.pop_back();
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int arr[] = {3, 1, 2};
		int n = 3;
		vector<int>ds;
		PrintSubsequence(0, ds, arr, n);
		return 0;

	}
}