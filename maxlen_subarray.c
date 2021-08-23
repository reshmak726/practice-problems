// Find maximum length subarray having a given sum
//  int arr[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
//     int target = 8;
//     Output:

// [2, 5]




#include<stdio.h>
void maxsubarray(int a[],int n,int s){
    int len =0;
    int endingindex = -1;
    for(int i=0;i<n;i++){
        int target = 0;
        for(int j=i;j<n;j++){
            target+=a[j];
            if(target == s){
                if(len<j-i+1){
                    len=j-i+1;
                    endingindex = j;
                }
            }
        }
    }
    printf("[%d,%d]",endingindex-len+1,endingindex);

}
int main(){
    int a[]={1,3,5,4,6,7};
    int target = 9;
    int n = sizeof(a)/sizeof(a[0]);
    maxsubarray(a,n,target);
    return 0;
}