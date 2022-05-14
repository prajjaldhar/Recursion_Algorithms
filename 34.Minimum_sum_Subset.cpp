#include<bits/stdc++.h>
using namespace std;
int mindiff = INT_MAX;
string ans = "";
void solve(int arr[], int vidx, int length, vector<int>set1, vector<int>set2, int soset1, int soset2)
{
  int i = 0, j = 0;
  if (vidx == length)
  {
    int delta = abs(soset1 - soset2);
    if (delta < mindiff) {
      mindiff = delta;
      cout << "[";
      for (auto i : set1)
        cout << i << ",";
      cout << "]";
      cout << "  ";
      cout << "[";
      for (auto i : set2)
        cout << i << ",";
      cout << "]";
      cout << endl;
    }
    return;
  }

  //soset==>sum of set

  if (set1.size() < (length + 1) / 2) {
    set1.push_back(arr[vidx]);
    solve(arr, vidx + 1, length, set1, set2, soset1 + arr[vidx], soset2);
    set1.pop_back();
  }

  if (set2.size() < (length + 1) / 2)
  {
    set2.push_back(arr[vidx]);
    solve(arr, vidx + 1, length, set1, set2, soset1, soset2 + arr[vidx]);
    set2.pop_back();
  }
}
int main() {
  int arr[] = {1, 2, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int>set1;
  vector<int>set2;
  solve(arr, 0, n, set1, set2, 0, 0);
  // cout<<res;
}