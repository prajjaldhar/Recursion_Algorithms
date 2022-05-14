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
	//horizontal moves
	for (int i = 1; i <= dc - sc; i++)
	{
		print_maze(sr, sc + i, dr, dc, ans + "h" + to_string(i) );
	}
	//vertical moves
	for (int i = 1; i <= dr - sr; i++)
	{
		print_maze(sr + i, sc, dr, dc, ans + "v" + to_string(i));
	}
	//diagonal moves
	for (int i = 1; i <= dc - sc && i <= dr - sr; i++)
	{
		print_maze(sr + i, sc + i, dr, dc, ans + "d" + to_string(i));
	}
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