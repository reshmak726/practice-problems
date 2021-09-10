// Reverse every consecutive `m`-elements of a subarray
// consider the below array.

// A[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
// m = 3

// Then for subarray [i, j], where i and j is

// Input:  i = 1, j = 7 or 8
// Output: [1, 4, 3, 2, 7, 6, 5, 8, 9, 10]

#include <stdio.h>
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
    int min(int x, int y)
    {
        return (x < y) ? x : y;
    }
    void reverse_subarray(int a[], int i, int j)
    {
        while (i < j)
        {
            swap(a, i, j);
            i++, j--;
        }
    }
    void reverse(int a[], int beg, int end, int m)
    {
        if (m <= 1)
        {
            return;
        }
        if (m > end - beg + 1)
        {
            return;
        }
        for (int i = beg; i <= end; i = i + m)
        {
            if (i + m - 1 <= end)
            {
                reverse_subarray(a, i, i + m - 1);
            }
        }
    }

    void printarray(int a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }


    int main()
    {
        int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int m = 3;
        int beg = 1, end = 8;
        int n = sizeof(a) / sizeof(a[0]);
        reverse(a, beg, min(end, n - 1), m);
        printarray(a, n);
        return 0;
    }