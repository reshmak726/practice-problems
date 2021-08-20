#include<stdio.h>
void display(int num){
    if(num)
        display(num-1);
     else
        return;
    printf("\n%d",num);
    
}
int main(){
    int limit;
    printf("enter the number of terms to be printed:");
    scanf("%d", &limit);
    display(limit);
    return 0;
}