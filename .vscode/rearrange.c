// Input:  {1, 3, 4, 2, 0}
// Output: {4, 0, 3, 1, 2}
 
// Explanation:
 
// A[0] = 1, A[1] becomes 0
// A[1] = 3, A[3] becomes 1
// A[2] = 4, A[4] becomes 2
// A[3] = 2, A[2] becomes 3
// A[4] = 0, A[0] becomes 4
#include<stdio.h>
void rearrange(int a[],int n){
    int aux[n];
    for(int i=0;i<n;i++){
        aux[a[i]]=i;
    }
    for(int i=0;i<n;i++){
        a[i]=aux[i];
    }

}
int main(){
    int a[]={1,3,4,2,0};
    int n = sizeof(a)/sizeof(a[0]);
    rearrange(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}