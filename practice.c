#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int m,k=0;
    int n=10;
    printf("enter the number:\n");
    scanf("%d",&m);
    if(m>n){
        printf("invalid input..");
        return 0;
    }
    else if (m<n){
        printf("number of candies sold %d\n",m);
        // scanf("%d",&m);
        
        // scanf("%d",&k);
    }
         k = (n-m);
        printf("number of candies available %d\n:",k);

    

    return 0;
}