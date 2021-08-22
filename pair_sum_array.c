// Find a pair with the given sum in an array
// Input:
 
// arr = [8, 7, 2, 5, 3, 1]
// target = 10
 
// Output:
 
// Pair found (8, 2)
// or
// Pair found (7, 3)

#include<stdio.h>
void pair(int arr[],int n, int target){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("pair found (%d,%d)",arr[i],arr[j]);
                return;
            }
        }
    }
    printf("pair not found!");
}
int main(){
    int arr[]={3,2,1,5,4,6};
    int target = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    pair(arr,n,target);

    return 0;
}