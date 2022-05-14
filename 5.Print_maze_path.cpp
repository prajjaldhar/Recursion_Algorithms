#include<bits/stdc++.h>
using namespace std;
void print_maze(int sr, int sc, int dr, int dc, string ans)
{
	if (sr > dr || sc > dc)
		return;
	if (sr == dr && sc == dc)
	{
		cout << ans << " ";
		return;
	}
	print_maze(sr + 1, sc, dr, dc, ans + "h");
	print_maze(sr, sc + 1, dr, dc, ans + "v");
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int sr, sc, dr, dc;
		cin >> dr >> dc;
		print_maze(1, 1, dr, dc, "");

	}
}

