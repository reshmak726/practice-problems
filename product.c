// Replace every array element with the product of every other element without using a division operator
// Given an integer array, replace each element with the product of every other element without using the division operator.

// For example,

// Input:  { 1, 2, 3, 4, 5 }
// Output: { 120, 60, 40, 30, 24 }


#include<stdio.h>
void findproduct(int a[],int n){
    if(n==0){
        return;
    }
    int left[n],right[n];
    left[0]=1;
    for(int i=1;i<n;i++){
        left[i]=a[i-1] * left[i-1];
    }
    right[n-1]=1;
    for(int j=n-2;j>=0;j--){
        right[j]=a[j+1]*right[j+1];
    }
    for(int i=0;i<n;i++){
        a[i] = left[i] * right[i];
    }
}
int main(){
    int a[]={5,3,4,2,6,8};
    int n = sizeof(a)/sizeof(a[0]);
    findproduct(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}