
// Find the closest pair to a given sum in two sorted arrays


// Input:
 
// first[] = { 1, 8, 10, 12 }
// second[] = { 2, 4, 9, 15 }
// target = 11
// Output: The closest pair is [1, 9]


#include <bits/stdc++.h>
using namespace std;
void findclosepair(int first[], int second[], int m, int n, int target)
{
    if (m == 0 || n == 0)
    {
        return;
    }
    int x = 0;
    int y = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (abs(first[i] + second[j] - target) < abs(first[x] + second[y] - target))
            {
                x = i;
                y = j;
            }
        }
    }
    cout << "closest pair is"
         << "[" << first[x] << "," << second[y] << "]";
}

int main(void)
{
    int first[] = {1, 8, 10, 12};
    int second[] = {2, 4, 9, 15};
    int target = 11;
    int m = sizeof(first) / sizeof(first[0]);
    int n = sizeof(second) / sizeof(second[0]);
    findclosepair(first, second, m, n, target);
    return 0;
}