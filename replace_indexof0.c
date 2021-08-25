// Find the index of 0 to be replaced to get the maximum length sequence of continuous ones
// Given a binary array, find the index of 0 to be replaced with 1 to get the maximum length sequence of continuous ones.

// For example, consider the array { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 }. We need to replace index 7 to get the continuous sequence of length 6 containing all 1’s.



#include<stdio.h>
int findindexofzero(int a[],int n){
    int maxcount = 0;
    int previousindexofzero = -1;
    int count =0;
    int maxindex = -1;

    for (int i=0;i<n;i++){
        if(a[i]==1){
            count++;
        }
        else{
            count = i-previousindexofzero;
            previousindexofzero = i;
        }
        if(count>maxcount){
            maxcount = count;
            maxindex = previousindexofzero;
        }

    }
    return maxindex;

}
int main(){
    int a[]= {1,0,0,1,1,0,1,1,1,1};
    int n = sizeof(a)/sizeof(a[0]);
    int index = findindexofzero(a,n);
    if(index!=-1){
        printf("index to be replaced is %d",index);
    }
    else{
        printf("invalid input");
    }
    return 0;
    
}