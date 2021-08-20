#include<stdio.h>
int getmaxIndex(int a[],int size){
    int max,maxindex,i;
    max = a[0];
    maxindex = 0;
    for(i=1;i<size;i++){
        if(max<a[i]){
            max = a[i];
            maxindex = i;
        }
        
    }
    return(maxindex);
}
void sort(int a[],int size){
    int maxindex,temp;
    if(size>1){
        maxindex = getmaxIndex(a,size);
        temp = a[size-1];
        a[size-1] = a[maxindex];
        a[maxindex] = temp;
        sort(a,size-1);
  }

}

int main(){

    int a[]={45,34,12,5,34,87,10,7};
    int size = 8,i;
    sort(a,size);
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}