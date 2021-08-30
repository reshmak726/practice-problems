#include<stdio.h>
void swap(int a[],int i,int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void part(int a[],int n){
    int j =0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a,i,j);
            j++;
        }
    }
}
int main(){
    int a[] = {6,4,0,1,2,0,8,0,9,0};
    int n = sizeof(a)/sizeof(a[0]);
    part(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}