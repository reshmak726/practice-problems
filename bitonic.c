// Longest bitonic subarray of the sequence { 3, 5, 8, 4, 5, 9, 10, 8, 5, 3, 4 } is { 4, 5, 9, 10, 8, 5, 3 }
 
#include<stdio.h>
#include<stdlib.h>
void findbit(int a[],int n){
    int end_index = 0, maxlen=1, i=0;
    while(i+1<n){
        int len = 1;
        while(i+1<n && a[i]<a[i+1]){
            i++,len++;
        }
        while(i+1<n && a[i]>a[i+1]){
            i++,len++;
        }
        while(i+1<n && a[i]==a[i+1]){
            i++;
        }
        if(len>maxlen){
            maxlen = len;
            end_index =i;
        }
    }
    printf("the length of longest bitonic subarray is %d\n",maxlen);
    printf("longest bitonic subarray indices is[%d %d]",end_index-maxlen+1,end_index);
}
int main(){
    int a[] = {1,7,4,2,5,6,8,1,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    findbit(a,n);
    return 0;
}