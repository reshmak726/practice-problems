// Print all subarrays of an array having distinct elements


// Input:  A[] = { 5, 2, 3, 5, 4, 3 }
 
// Output: The largest subarrays with all distinct elements are:
 
// { 5, 2, 3 }
// { 2, 3, 5, 4 }
// { 5, 4, 3 }

#include<bits/stdc++.h>
using namespace std;
void printsubarray(int a[],int i,int j,int n){
    if(i<0 || i>j || j>=n){
        return;
    }
    for(int index=i;index<j;index++){
        cout<<a[index]<<" ,";
    }
    cout<<a[j]<<endl;
}
void calculate(int a[],int n){
    unordered_map<int,bool> visited;
    int right=0,left=0;
    while(right<n){
        while(right<n && !visited[a[right]]){
            visited[a[right]] = true;
            right++;
        }
        printsubarray(a,left,right-1,n);
        while(right<n && visited[a[right]]){
            visited[a[left]] = false;
            left++;
        }
    }
}
int main(){
    int a[]={5,2,3,5,4,3};
    int n = sizeof(a)/sizeof(a[0]);
    calculate(a,n);
    return 0;
}