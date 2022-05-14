#include<bits/stdc++.h>
using namespace std;
#define N 2
void queenPermutation(int qpsf, int tq, int chess[N][N])
{
	if (qpsf == tq) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				if (chess[i][j] == 0) {
					cout << "-  ";
				}
				else {
					cout << "q" << chess[i][j] << " ";
				}
			cout << "\n";
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (chess[i][j] == 0)
			{
				chess[i][j] = qpsf + 1;
				queenPermutation(qpsf + 1, tq, chess);
				chess[i][j] = 0;
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int chess[N][N] = {0};
		queenPermutation(0, N, chess);
	}
}