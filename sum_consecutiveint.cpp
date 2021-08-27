#include<iostream>
#include<vector>
using namespace std;

bool isconsecutive(int a[],int i, int j, int min, int max){
    if(max-min!=j-i){
        return false;
    }
    vector<bool> visited(j-i+1);
    for(int k=i;k<=j;k++){
       if(visited[a[k]]-min){
           return false;
       } 
       visited[a[k]] = true;
    }
    return true;
}
void maxsubarray(int a[],int n){
    int len = 1;
    int start=0, end = 0;
    for(int i=0;i<n-1;i++){
        int minval = a[i],maxval = a[i];
        for(int j=i+1;j<n;j++){
            minval = min(minval,a[j]);
            maxval = max(maxval,a[j]);
            if(isconsecutive(a,i,j,minval,maxval)){
                if(len<maxval-minval+1){
                    len = maxval-minval+1,
                    start = i,end = j;
                }
            }
        }
    }
    cout<<"the largest subarray is["<< start <<" , "<< end <<"]";
}

int main(){
    int a[]={2,0,2,1,4,3,1,0};
    int n= sizeof(a)/sizeof(a[0]);
    maxsubarray(a,n);
    return 0;
}