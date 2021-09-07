// Find the smallest window in an array sorting which will make the entire array sorted


// Input:  { 1, 2, 3, 7, 5, 6, 4, 8 }
// Output: Sort the array from index 3 to 6


#include<iostream>
#include<limits>
using namespace std;
void subarray(int a[],int n){
    int leftindex = -1;
    int rightindex = -1;
    int maxsofar= INT16_MIN;
    for(int i=0;i<n;i++){
        if(maxsofar<a[i]){
            maxsofar = a[i];
        }
        if(a[i]<maxsofar){
            rightindex = i;
        }
    }
    int minsofar = INT16_MAX;
    for(int i = n-1;i>=0;i--){
        if(minsofar>a[i]){
            minsofar = a[i];
        }
        if(a[i]>minsofar){
            leftindex = i;
        }
    }
    if(leftindex==-1){
        cout<<"array is already sorted";
        return;
    }
    cout<<"sort array from " << leftindex << " to " << rightindex;
}
int main(){
    int a[] = {1,6,2,3,8,4,0,9};
    int n = sizeof(a)/sizeof(a[0]);
    subarray(a,n);
    return 0;
}