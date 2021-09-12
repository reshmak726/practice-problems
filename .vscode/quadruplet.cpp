// Input:
 
// arr = [ 2, 7, 4, 0, 9, 5, 1, 3 ]
// target = 20
 
// Output: Quadruplet exists.
 
// Below are quadruplets with the given sum 20
 
// (0, 4, 7, 9)
// (1, 3, 7, 9)
// (2, 4, 5, 9)

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> Pair;
bool hasquadruplet(int a[], int n, int target)
{
    unordered_map<int, vector<Pair>> map;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int val = target - (a[i] + a[j]);
            if (map.find(val) != map.end())
            {
                for (auto pair : map.find(val)->second)
                {
                    int x = pair.first;
                    int y = pair.second;
                    if ((x != i && x != j) && (y != i && y != j))
                    {
                        cout << "quadruplet found (" << a[i] << "," << a[j] << "," << a[x] << "," << a[y] << ")" << endl;
                        return true;
                    }
                }
            }
            map[a[i] + a[j]].push_back({i, j});
        }
    }
    return false;
}
int main()
{
    int a[] = {2, 7, 4, 0, 9, 5, 1, 3};
    int target = 10;
    int n = sizeof(a) / sizeof(a[0]);
    if (!hasquadruplet(a, n, target))
    {
        cout << "quadruplet doesnt exist";
    }
    return 0;
}