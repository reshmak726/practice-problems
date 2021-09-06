// Input:  { -6, 4, -5, 8, -10, 0, 8 }
// Output: 1600
// Explanation: The maximum product subarray is {4, -5, 8, -10} having product 1600



#include <stdio.h>
int min(int x, int y)
{
    return (x < y) ? x : y;
}
int max(int x, int y)
{
    return (x > y) ? x : y;
}
int maxproduct(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int maxending = 0;
    int minending = 0;
    int maxsofar = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = maxending;
        maxending = max(a[i], max(a[i] * maxending, a[i] * minending));
        minending = min(a[i], min(a[i] * temp, a[i] * minending));
        maxsofar = max(maxsofar, maxending);
    }
    return maxsofar;
}
int main()
{
    int a[] = {-6,4,-5,8,-10,0,8};
    int n = sizeof(a) / sizeof(a[0]);

    printf("max product is %d", maxproduct(a, n));

    return 0;
}