// Sort an array in one swap whose two elements are swapped
// Input:  A[] = [3, 8, 6, 7, 5, 9] or [3, 5, 6, 9, 8, 7] or [3, 5, 7, 6, 8, 9]
 
// Output: A[] = [3, 5, 6, 7, 8, 9]
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
void sortarray(int a[], int n)
{
    if (n <= 1)
    {
        return;
    }
    int x = -1, y = -1;
    int prev = a[0];
    for (int i = 1; i < n; i++)
    {
        if (prev > a[i])
        {
            if (x == -1)
            {
                x = i - 1, y = i;
            }
            else
            {
                y = i;
            }
        }
        prev = a[i];
    }
    swap(a[x], a[y]);
}

int main()
{
    int a[] = {2,1,0,4,7,8,9};
    int n = sizeof(a) / sizeof(a[0]);
    sortarray(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}