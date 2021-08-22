#include<stdio.h>
int main(){
    int a[10],max,min;
    for(int i=0;i<10;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=0;i<10;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    min=a[0];
    for(int i=0;i<10;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
     printf("max number is %d and min number is %d",max,min);
    return 0;
}