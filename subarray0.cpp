// Check if a subarray with 0 sum exists or not
// Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
 
// Output: Subarray with zero-sum exists
 
// The subarrays with a sum of 0 are:
 
// { 3, 4, -7 }
// { 4, -7, 3 }
// { -7, 3, 1, 3 }
// { 3, 1, -4 }
// { 3, 1, 3, 1, -4, -2, -2 }
// { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
// Note that the problem deals with subarrays that are contiguous


#include<iostream>
#include<unordered_set>
using namespace std;

bool haszero(int arr[],int n){
    unordered_set<int> set;
    set.insert(0);
    int sum =0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        if(set.find(sum)!=set.end()){
            return true;
        }
        else{
            set.insert(sum);
        }
    }
    return false;
}
int main(){
    int arr[] = {3,-2,-1,-2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    haszero(arr,n)  ?
        cout<<"subarray exists":
        cout<<"subarray does not exists";
    return 0;
}