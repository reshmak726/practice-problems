// Group elements of an array based on their first occurrence


// Input:  { 1, 2, 3, 1, 2, 1 }
// Output: { 1, 1, 1, 2, 2, 3 }

#include<bits/stdc++.h>
using namespace std;
void rearrange(int a[],int n){
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq.find(a[i])!=freq.end()){
            int k= freq[a[i]];
            while(k--){
                cout<<a[i]<<" ";
            }
            freq.erase(a[i]);
        }

    }
}
int main(){
    int a[]={3,6,5,3,4,3,5,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    rearrange(a,n);
    return 0;
}