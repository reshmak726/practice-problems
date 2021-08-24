// Sort an array of 0’s, 1’s, and 2’s (Dutch National Flag Problem)
// Given an array containing only 0’s, 1’s, and 2’s, sort it in linear time and using constant space.

// For example,

// Input:  { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 }
 
// Output: { 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2 }



#include<stdio.h>
void swap(int a[],int i,int j){
    int temp = a[i];
     a[i] = a[j];
    a[j] = temp;
}

void partition(int a[],int end){
    int start = 0;
     int mid = 0;
     int pivot = 1;
     while (mid<=end)
     {
         if(a[mid]<pivot){
             swap(a,start,mid);
             ++start,++mid;

         }
         else if(a[mid]>pivot){
             swap(a,mid,end);
             --end;
         }
         else{
             ++mid;
         }
     }
     
}

int main(){
    int a[]={1,2,0,0,1,2,2,0,0,1};
    int n = sizeof(a)/sizeof(a[0]);
    partition(a,n-1);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}