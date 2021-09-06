#include<stdio.h>
#include<limits.h>
void findsubarray(int a[],int n,int k){
    if(n==0|| n<=k ){
        return;
    }
    int windowsum = 0;
    int minwindow = INT_MAX;
    int last = 0;
    for(int i=0;i<n;i++){
        windowsum+= a[i];
        if(i+1>=k){
            if(minwindow>windowsum){
                minwindow = windowsum;
                last = i;
            }
            windowsum = a[i+1-k];
        }
    }
    printf("min sum subarray is(%d,%d)",last-k+1,last);
}
int main(){
    int a[] = {1,6,3,7,2,1};
    int k=5;
    int n = sizeof(a)/sizeof(a[0]);
    findsubarray(a,n,k);
    return 0;
}
