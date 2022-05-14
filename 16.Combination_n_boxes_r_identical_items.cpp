#include<bits/stdc++.h>
using namespace std;
void permutations(int cb, int tb, int items[], int ssf, int ts, string asf) {
  if (cb > tb) {
    if (ssf == ts) {
      cout << asf << "\n";
    }

    return;
  }


  permutations(cb + 1, tb, items, ssf + 1, ts, asf + "i");
  permutations(cb + 1, tb, items, ssf, ts, asf + "_" );
}

int main() {
  int t ;
  cin >> t;
  while (t--) {
    int nboxes = 3;
    int ritems = 2;
    int items[ritems];
    permutations(1, nboxes, items, 0, ritems, "");
  }
  return 0;
}

