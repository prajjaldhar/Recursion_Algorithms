#include<bits/stdc++.h>
using namespace std;
#define N 2
void QueenPermutation(int qpsf, int tq, int row, int col, string asf, vector<bool>&queens)
{
	if (row == tq)
	{
		if (qpsf == tq) {
			cout << asf << " ";
			cout << "\n";
		}
		return;
	}
	int nr = 0;
	int nc = 0;
	string seprator = "";
	if (col == tq - 1)
	{
		nr = row + 1;
		nc = 0;
		seprator = "\n";
	}
	else
	{
		nr = row;
		nc = col + 1;
		seprator = "\t";
	}
	for (int i = 0; i < tq; ++i)
	{
		if (queens[i] == false)
		{
			queens[i] = true;
			QueenPermutation(qpsf + 1, tq, nr, nc, asf + "q" + to_string(i + 1) + seprator, queens);
			queens[i] = false;
		}
	}
	QueenPermutation(qpsf + 0, tq, nr, nc, asf + "-" + seprator, queens);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n = 3;
		vector<bool>queens(n, false);
		QueenPermutation(0, n, 0, 0, "", queens);
	}
}