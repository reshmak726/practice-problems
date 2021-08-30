#include<stdio.h>
#include<limits.h>

int max(int x,int y){
    return (x>y) ? x : y;
}
int maxdiff(int a[],int n){
    int diff = INT_MIN;

    if(n==0){
        return diff;
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                diff = max(diff,a[j]-a[i]);
            }
        }
    }
    return diff;

}
int main(){
    int a[]={2,5,3,8,7,3,1};
    int n = sizeof(a)/sizeof(a[0]);
    
    int result=maxdiff(a,n);
    if(result!=INT_MIN){
        printf("max diff is %d",result);
    }

    return 0;
}
