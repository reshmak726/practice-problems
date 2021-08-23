// Find the largest subarray having an equal number of 0’s and 1’s
// Input:  { 0, 0, 1, 0, 1, 0, 0 }
 
// Output: Largest subarray is { 0, 1, 0, 1 } or { 1, 0, 1, 0 }

#include<iostream>
#include<unordered_map>
using namespace std;
void largestsubarray(int a[],int n){
    unordered_map<int,int> map;
    map[0]=-1;
    int len = 0;
    int ending_index = -1;
    int sum  = 0;
    for(int i=0;i<n;i++){
        sum+= (a[i]==0)? -1:1;
        if(map.find(sum)!=map.end()){
            if(len<i - map[sum]){
                len = i-map[sum];
                ending_index = i;
            }
        }
        else{
            map[sum] = i;
        }

    }
    if(ending_index!= -1){
        cout << "[" << ending_index - len+1 << "," << ending_index <<"]";
     }
     else{
         cout <<"no subarray exists";
     }
}
int main(){
    int a[] = {0,0,1,1,0,0,0};
    int n = sizeof(a)/sizeof(a[0]);
    largestsubarray(a,n);
    return 0;
}
