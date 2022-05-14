#include<bits/stdc++.h>
using namespace std;

int maximum = 0;

void travelAndCollectGold(int arr[7][7], int n, int m, int i, int j, bool visited[7][7], vector<int>&bag)
{
	if (i < 0  || j < 0 || i >= n || j >= m ||
	        arr[i][j] == 0 || visited[i][j] == true) {

		return;
	}

	visited[i][j] = true;
	bag.push_back(arr[i][j]);
	travelAndCollectGold(arr, n, m, i - 1, j, visited, bag);
	travelAndCollectGold(arr, n, m, i, j - 1, visited, bag);
	travelAndCollectGold(arr, n, m, i + 1, j, visited, bag);
	travelAndCollectGold(arr, n, m, i, j + 1, visited, bag);
}

void getMaxGold(int arr[7][7], int n, int m) {

	bool visited[7][7] = {0};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] != 0 && visited[i][j] == false) {
				vector<int>bag;
				travelAndCollectGold(arr, n, m, i, j, visited, bag);
				for (auto &val : bag)
					cout << val << " ";
				cout << endl;

				int sum = 0;
				for (auto &val : bag) {

					sum += val;
				}
				if (sum > maximum) {
					maximum = sum;
				}
			}
		}
	}
}


int main()
{
	int n = 7;
	int m = 7;
	int arr[7][7] = {
		{10, 0 , 100, 200, 0, 8, 0},
		{0, 20 , 0 , 0, 0, 6, 0},
		{0, 30 , 50, 9, 0, 3, 4},
		{40, 12 , 0 , 5, 0, 3, 11},
		{0, 0 , 0 , 9, 0, 9, 0},
		{1, 0 , 7 , 0, 7, 0, 2},
		{97, 9, 10, 0, 0, 10, 8}
	};
	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j  < m; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	getMaxGold(arr, n, m);
	cout << "maximum = " << maximum;

}
