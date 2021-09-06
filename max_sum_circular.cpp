// Input:  {2, 1, -5, 4, -3, 1, -3, 4, -1}
 
// Output: Subarray with the largest sum is {4, -1, 2, 1} with sum 6.
 
 
// Input:  {-3, 1, -3, 4, -1, 2, 1, -5, 4}
 
// Output: Subarray with the largest sum is {4, -1, 2, 1} with sum 6.

#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;

int kadane(int arr[],int n){
    int maxsofar = 0;
    int maxendinghere = 0;
    for(int i=0;i<n;i++){
        maxendinghere = maxendinghere+arr[i];
        maxendinghere = max(maxendinghere,0);
        maxsofar = max(maxsofar,maxendinghere);
    }
    return maxsofar;
}
int circularkadane(int arr[],int n){
    if(n==0){
        return 0;
    }
     int maxnum = *max_element(arr,arr+n);
     if(maxnum<0){
         return maxnum;
     }
     for(int i=0;i<n;i++){
         arr[i] = -arr[i];
     }
     int negmaxsum = kadane(arr,n);
     for(int i=0;i<n;i++){
         arr[i]=-arr[i];
     }
    return max(kadane(arr,n),accumulate(arr,arr+n,0)+ negmaxsum);
}
int main(){
    int arr[]={2,-1,-5,4,3,1,-3,4,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the sum of subarray is "<<circularkadane(arr,n);
    return 0;
}