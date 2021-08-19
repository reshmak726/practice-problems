
// this program is just finding out prime numbers of given number within a given range 


#include<stdio.h>

int isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n1;
    printf("enter the number\n");
    scanf("%d",&n1);

    // printf("enter second number\n");
    // scanf("%d",&n2);

    // printf(" %d ",n1);
    for(int i = 2;i<=n1;i++){
        if(isprime(i)){
            printf("%d ",i);
        }
    }
    return 0;
}