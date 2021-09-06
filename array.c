// Find the smallest subarray length whose sum of elements is greater than `k`
// Input:  {1, 2, 3, 4, 5, 6, 7, 8}, k = 20
// Output: The smallest subarray length is 3
// Explanation: The smallest subarray with sum > 20 is {6, 7, 8}

#include<stdio.h>
#include<limits.h>
int min(int x,int y){
    return (x<y)?x:y;
}
int smallestsubarray(int a[],int n,int k){
    int windowsum = 0;
    int len =INT_MAX;
    int left = 0;
    for(int right =0;right<n;right++){
        windowsum+=a[right];
        while (windowsum>k && left<=right)
        {
            len = min(len,right-left+1);
            windowsum -= a[left];
            left++;
        }
        
    }
    if(len==INT_MAX){
        return 0;
    }
    return len;
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8};
    int k = 21;
    int n = sizeof(a)/sizeof(a[0]);
    int len = smallestsubarray(a,n,k);
    if(len!= INT_MAX){
        printf("smallest subarray length is %d",len);
    }
    else{
        printf("no subarray exists");
    }
    return 0;
}