// Find the maximum product of two integers in an array
// Given an integer array, find the maximum product of two integers in it.

// For example, consider array {-10, -3, 5, 6, -2}. The maximum product is the (-10, -3) or (5, 6) pair.

#include<stdio.h>
#include<limits.h>
void max(int a[],int n){
    if(n<2){
        return;
    }
    int maxproduct = INT_MIN;
    int max_i,max_j;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(maxproduct< a[i]*a[j]){
                maxproduct = a[i]*a[j];
                max_i = i, max_j = j;
            }
        }
    }
    printf("%d,%d",a[max_i],a[max_j]);
}

int main(){
    int a[] = {10,3,5,8};
    int n = sizeof(a)/sizeof(a[0]);
    max(a,n);
    
    return 0;
}