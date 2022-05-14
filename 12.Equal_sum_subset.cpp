#include <bits/stdc++.h>
using namespace std;
void solution(int arr[], int index, int n, int k, int subsetSum[], int rssf, vector<vector<int>> &ans)
{
	if (index == n )
	{
		if (rssf == k)
		{
			int isum = subsetSum[0];
			bool flag = true;
			for (int i = 0; i < k; i++) {
				if (subsetSum[i] != isum) {
					flag = false;
					break;
				}
			}

			if (flag)
			{
				for (auto subset : ans ) {
					for (int ele : subset)
					{
						cout << ele << " ";
					}
					cout << '\n';
				}
				cout << endl;
			}

		}
		return;
	}

	for (int container = 0; container < k; container++)
	{
		if (ans[container].size() == 0)
		{
			ans[container].push_back(arr[index]);
			subsetSum[container] += arr[index];
			solution(arr, index + 1, n, k, subsetSum, rssf + 1, ans);
			subsetSum[container] -= arr[index];
			ans[container].pop_back();
			break;
		}
		else
		{
			ans[container].push_back(arr[index]);
			subsetSum[container] += arr[index];
			solution(arr, index + 1, n, k, subsetSum, rssf, ans);
			subsetSum[container] -= arr[index];
			ans[container].pop_back();
		}
	}
}

int  main()
{

	int t ;
	cin >> t;
	while (t--) {
		int n = 4;
		int arr[4] = {9, 5, 4, 9};
		int sum = accumulate(arr, arr + 4, 0);
		for (int i = 0; i < n; i++)
			cout << arr[i];
		cout << endl;
		int k = 3;
		// if k is equal to 1, then whole array is your answer
		if (k == 1) {
			cout << "[";
			for (int i = 0 ; i  < n; i++) {
				cout << arr[i] << ", ] ";
			}
			cout << endl;
			return 0;
		}
		//if there are more subsets than no. of elements in array
		//or sum of all elements is not divisible by k
		if (k > n || sum % k != 0) {
			cout << "-1";
			return 0;
		}
		int subsetSum[k] = {0};
		vector<vector<int>> result(k);
		solution(arr, 0, n, k, subsetSum, 0, result);
		return 0;
	}

}