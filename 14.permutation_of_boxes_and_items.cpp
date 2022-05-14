//we have n boxes and r items and we have to print
// all such permutations of placing an item over a box
#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&box, vector<bool>&vis, int n, int ci, int ti)
{
	if (ci > ti)
	{
		for (int i = 0; i < n; i++)
		{
			if (box[i] == 0)
				cout << "_" << " ";
			else
				cout << box[i];
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (vis[i] == false)
		{
			vis[i] = true;
			box[i] = ci;
			permutation(box, vis, n, ci + 1, ti);
			box[i] = 0;
			vis[i] = false;

		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, r;
		cin >> n >> r;
		vector<int>box(n, 0);
		vector<bool>used(n, false);
		permutation(box, used, n, 1, r);
	}
}