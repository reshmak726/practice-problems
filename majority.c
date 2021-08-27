
// Find majority element (Boyer–Moore Majority Vote Algorithm)
// Given an integer array containing duplicates, return the majority element if present. A majority element appears more than n/2 times, where n is the array size.

// For example, the majority element is 2 in array {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2}.






#include<stdio.h>

void majority(int a[],int n){
    int maxcount =0;
    int index = -1;
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }

        }
        if(count>maxcount){
            maxcount = count;
            index = i;
        }

    }
    if(maxcount>n/2){
        printf("majority element is: %d",a[index]);
    }
    else{
        printf("no majority elements..");
    }
}
int main(){
    int a[] = {1,4,3,1,1,7,1,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    majority(a,n);
    return 0;
}