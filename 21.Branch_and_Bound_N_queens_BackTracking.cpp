// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
#define N 4


void printSolution(int board[N][N], int row, vector<bool>&cols, vector<bool>&ldiag, vector<bool>&rdiag, string asf)
{
    if (row == N)
    {
        cout << asf << " ";
        cout << "\n";
        return;
    }
    for (int col = 0; col < N ; ++col)
    {
        if (cols[col] == false && ldiag[row + col] == false && rdiag[row - col + (N - 1)] == false)
        {
            board[row][col] = true;
            cols[col] = true;
            ldiag[row + col] = true;
            rdiag[row - col + (N - 1)] = true;
            printSolution(board, row + 1, cols, ldiag, rdiag, asf + to_string(row) + "-" +  to_string(col) + ",");
            board[row][col] = false;
            cols[col] = false;
            ldiag[row + col] = false;
            rdiag[row - col + (N - 1)] = false;
        }
    }
}



// Driver code
int main()
{
    int t ;
    cin >> t;
    while (t--) {
        int board[N][N];
        vector<bool>cols(N);
        vector<bool>ldiag(2 * N - 1);
        vector<bool>rdiag(2 * N - 1);
        printSolution(board, 0, cols, ldiag, rdiag, "");
    }
    return 0;
}
