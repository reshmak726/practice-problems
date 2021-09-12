#include <bits/stdc++.h>
using namespace std;
void quadtuple(int a[], int n, int target)
{
    sort(a, a + n);
    for (int i = 0; i <= n - 4; i++)
    {
        for (int j = i + 1; j <= n - 3; j++)
        {
            int k = target - (a[i] + a[j]);
            int low = j + 1, high = n - 1;
            while (low < high)
            {
                if (a[low] + a[high] < k)
                {
                    low++;
                }
                else if (a[low] + a[high] > k)
                {
                    high--;
                }
                else
                {
                    cout << "(" << a[i] << "," << a[j] << "," << a[low] << "," << a[high] << ")" << endl;
                    low++, high--;
                }
            }
        }
    }
}
int main()
{
    int a[] = {2, 7, 4, 0, 9, 5, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 20;
    quadtuple(a, n, target);
    return 0;
}