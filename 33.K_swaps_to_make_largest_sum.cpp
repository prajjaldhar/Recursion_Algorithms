#include <bits/stdc++.h>
using namespace std;
string maximum;
string swap(string str, int i, int j) {

    char ith = str[i];
    char jth = str[j];

    string left = str.substr(0, i);
    string middle = str.substr(i + 1, j);
    string right = str.substr(j + 1);

    return left + jth + middle + ith + right;
}
void findMaximum(string str, int k)
{
    if (str.compare(maximum) > 0)
        maximum = str;

    // return if no swaps left
    if (k == 0)
        return;

    int n = str.length();

    // consider every digit
    for (int i = 0; i < n - 1; i++)
    {
        // and compare it with all digits after it
        for (int j = i + 1; j < n; j++)
        {
            // if digit at position i is less than digit
            // at position j, swap it and check for maximum
            // number so far and recurse for remaining swaps
            if (str[j] > str[i])
            {
                // swap str[i] with str[j]
                str = swap(str, i, j);

                // If current num is more than maximum so far
                // recurse of the other k - 1 swaps
                findMaximum(str, k - 1);

                // backtrack
                str = swap(str, i, j);
            }
        }
    }
}
int main() {

    string str = "123";
    int k = 4;
    maximum = str;
    findMaximum(str, k);
    cout << maximum << "\n";
}


