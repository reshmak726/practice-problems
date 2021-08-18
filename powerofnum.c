#include<stdio.h>
int main(){
    int m;
    int n;
    long long int val = 1;
    printf("enter the value :");
    scanf("%d",&m);
    printf("enter the power:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        val = val*m;
    }
    printf("the value of %d to the power %d is %lld",m,n,val);
    return 0;
}