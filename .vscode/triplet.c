#include<stdio.h>
void triplet(int a[],int n){
    for(int j=1;j<n-1;j++){
        int i=j-1,  k=j+1;
        while(i>=0 && k<n){
            if(a[i]+a[k]==2*a[j]){
                printf("[%d %d %d]\n",a[i],a[j],a[k]);
                k++,i--;
            }
            else if(a[i]+a[k]<2*a[j]){
                k++;
                
            }
            else{
                i--;
            }
        }

    }
}
int main(void){
    int a[]={1,3,5,6,8,9,15};
    int n=sizeof(a)/sizeof(a[0]);
    triplet(a,n);
    return 0;
}