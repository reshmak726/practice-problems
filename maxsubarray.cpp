// Print continuous subarray with maximum sum


// Input:  {-2, 1, -3, 4, -1, 2, 1, -5, 4}
 
// Output: The contiguous subarray with the largest sum is {4, -1, 2, 1}

#include<iostream>
#include<climits>
using namespace std;
void kadane(int a[],int n){
    if(n<=0){
        return;
    }
    int maxsofar = INT16_MIN;
    int maxendinghere = 0;
    int start = 0, end = 0;
    int beg =0;
    for(int i=0;i<n;i++){
        maxendinghere = maxendinghere+a[i];
        if(maxendinghere<a[i]){
            maxendinghere = a[i];
            beg = i;
        }
        if(maxsofar<maxendinghere){
            maxsofar=maxendinghere;
            start = beg;
            end = i;
        }
    }
    cout<<"subarray is ";
    for(int i=start;i<=end;i++){
        cout<< a[i] << " ";
    }
}
int main(){
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(a)/sizeof(a[0]);
    kadane(a,n);
    return 0;
}