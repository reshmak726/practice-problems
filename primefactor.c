#include<stdio.h>
void prime(int num){
    int count;
    for(count=2;num>1;count++){
        while (num % count ==0)
        {
            printf("%d",count);
            num = num/count;
        }
        
    }
}
int main(){
    int num;
    printf("enter integer\n ");
    scanf("%d", &num);
    prime(num);
    return 0;
}