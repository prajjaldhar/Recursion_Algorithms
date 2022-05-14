#include<bits/stdc++.h>
using namespace std;
#define N 2
void queenPermutation(int qpsf, int tq, int chess[N][N], int loc)
{
	if (qpsf == tq) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				if (chess[i][j] == true) {
					cout << "q ";
				}
				else {
					cout << "-" << " ";
				}
			cout << "\n";
		}
		cout << "\n";
		return;
	}
	for (int cell = loc + 1; cell < N * N; ++cell)
	{
		int row = cell / N;
		int col = cell % N;
		chess[row][col] = true;
		queenPermutation(qpsf + 1, tq, chess, cell);
		chess[row][col] = false;
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int chess[N][N] = {0};
		queenPermutation(0, N, chess, -1);
	}
}