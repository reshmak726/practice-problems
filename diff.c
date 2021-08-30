// Find the maximum difference between two array elements that satisfies the given constraints
// Given an integer array, find the maximum difference between two elements in it such that the smaller element appears before the larger element.

// For example,

// Input:  { 2, 7, 9, 5, 1, 3, 5 }
 
// Output: The maximum difference is 7.
 
// The pair is (2, 9)





#include<stdio.h>
#include<limits.h>

int max(int x,int y){
    return (x>y) ? x : y;
}
int maxdiff(int a[],int n){
    int diff = INT_MIN;

    if(n==0){
        return diff;
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                diff = max(diff,a[j]-a[i]);
            }
        }
    }
    return diff;

}
int main(){
    int a[]={2,5,3,8,7,3,1};
    int n = sizeof(a)/sizeof(a[0]);
    
    int result=maxdiff(a,n);
    if(result!=INT_MIN){
        printf("max diff is %d",result);
    }

    return 0;
}
