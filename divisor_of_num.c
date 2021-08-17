#include<stdio.h>
int main(){
    // declaring variables
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);

    // displaying divisors
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}