#include<stdio.h>
int main(){
    unsigned int n;
    int count=0;
    printf("enter the integer:\n");
    scanf("%d",&n);
    while (n!=0)
    {
        if(n&1 == 1)
        break;
        n=n>>1;
        count++;
    }
    printf("no of trailing zeroes:%d\n",count);
    
    return 0;
}