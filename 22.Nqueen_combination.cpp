#include<bits/stdc++.h>
using namespace std;
void QueenPermutation(int qpsf, int tq, int row, int col, string asf)
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
	string yasf = "";
	string nasf = "";
	if (col == tq - 1)
	{
		nr = row + 1;
		nc = 0;
		yasf = asf + "q\n";
		nasf = asf + "-\n";

	}
	else
	{
		nr = row;
		nc = col + 1;
		yasf = asf + "q";
		nasf = asf + "-";
	}
	QueenPermutation(qpsf + 1, tq, nr, nc, yasf);
	QueenPermutation(qpsf + 0, tq, nr, nc, nasf);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n = 3;
		QueenPermutation(0, n, 0, 0, "");
	}
}