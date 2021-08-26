
// Given an integer array, rearrange it such that every second element becomes greater than its left and right elements. Assume no duplicate elements are present in the array.

// For example,

// Input:  {1, 2, 3, 4, 5, 6, 7}
// Output: {1, 3, 2, 5, 4, 7, 6}



#include<stdio.h>
void swap(int a[],int i,int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void rearrange(int a[],int n){
    for(int i = 1;i<n;i+=2){
        if(a[i-1]>a[i]){
            swap(a,i-1,i);
        }
        if(i+1<n && a[i+1]>a[i]){
            swap(a,i+1,i);
        }
    }
}
int main(){
    int a[] = {3,7,4,9,1,8,5};
    int n = sizeof(a)/sizeof(a[0]);
    rearrange(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}