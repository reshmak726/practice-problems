// Maximum Sum Subarray Problem (Kadane’s Algorithm)


// Input:  {-2, 1, -3, 4, -1, 2, 1, -5, 4}
 
// Output: Subarray with the largest sum is {4, -1, 2, 1} with sum 6.


#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[],int n){
    int maxsofar = INT_MIN;
    int maxendinghere =0;
    for(int i=1;i<n;i++){
        maxendinghere = maxendinghere+a[i];
        maxendinghere = max(maxendinghere,a[i]);
        maxsofar = max(maxsofar,maxendinghere);
    }
    return maxsofar;
}
int main(){
    int a[]={1,8,-2,4,0,-3,6};
    int n = sizeof(a)/sizeof(a[0]);
    // kadane(a,n);
    cout<<"max subarray sum of subarray indices are " << kadane(a,n);
    return 0;
}
