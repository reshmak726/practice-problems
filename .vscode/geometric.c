
// Print all triplets that form a geometric progression
 
// Input:  A[] = { 2, 8, 10, 15, 16, 30, 32, 64 }
 
// Output:
// 2 8 32
// 8 16 32
// 16 32 64

#include<stdio.h>
void triplets(int a[],int n){
    if(n<3){
        return;
    }
    for(int j=1;j<n-1;j++){
        int i=j-1,k=j+1;
        while(1){
            while(i>=0 && k<n && (a[j]%a[i]==0) && (a[k]%a[j]==0) && (a[j]/a[i]==a[k]/a[j])){
                printf("[%d %d %d]",a[i],a[j],a[k]);
                k++,i--;
            }
            if(i<0 || k>=n){
                break;
            }
            if(a[j]%a[i]==0 && a[k]%a[j]==0){
                if(a[j]/a[i]<a[k]/a[j]){
                    i--;
                }
                else{
                    k++;
                }
            }
            else if(a[j]%a[i]==0){
                k++;
            }
            else{
                i--;
            }
        }
    }
}
int main(){
    int a[] = {1,2,6,10,18,54};
    int n=sizeof(a)/sizeof(a[0]);
    triplets(a,n);
    return 0;
}