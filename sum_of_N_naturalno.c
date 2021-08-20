#include <stdio.h>
int main(){
    int num,sum=0;
    printf("enter the natural number you want sum of\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum+= i;
    }
    printf("sum of %d natural no is %d\n ",num,sum);
    return 0;
}