// Find a triplet with the given sum in an array


// Input:
 
// arr = [ 2, 7, 4, 0, 9, 5, 1, 3 ]
// target = 6
 
// Output: Triplet exists.
 
// The triplets with the given sum 6 are {0, 1, 5}, {0, 2, 4}, {1, 2, 3}
#include<bits/stdc++.h>
using namespace std;
void printtriplets(int a[],int n,int target){
    sort(a,a+n);
    for(int i=0;i<=n-3;i++){
        int k = target - a[i];
        int low = i+1,high = n-1;
        while(low<high){
            if(a[low]+a[high]<k){
                low++;
            }
            else if(a[low]+a[high]>k){
                high--;

            }
            else{
                cout << "(" << a[i] <<" " << a[low] << " " << a[high] << ")\n";
                low++,high--;
            }
        }
    }
}
int main(){
    int a[] = {2,7,4,3,9,5,1,3};
    int n = sizeof(a)/sizeof(a[0]);
    int target= 6;
    printtriplets(a,n,target);
    return 0;
}