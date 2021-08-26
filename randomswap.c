#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int a[],int i,int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void shuffle(int a[],int n){
    for(int i=n-1;i>=1;i--){
        int j = rand()%(i+1);

        swap(a,i,j);
        
    }
}

int main(void){
    int a[] = {2,7,6,4,1,9};
    int n = sizeof(a)/sizeof(a[0]);
    srand(time(NULL));
    shuffle(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}