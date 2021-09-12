// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> a={1,6,5,3,2,8,9};
//     const size_t k = 2;
//     nth_element(a.begin(),a.begin()+k, a.end());
//     cout<<"k th smallest element is " << a[k];
//     return 0;
// }


// another way of same code is using quickselect algorithm same as quicksort algorithm
#include<stdio.h>
#include<stdlib.h>
// int N;
int swap(x,y){
    int temp = x;
    x=y;
    y=temp;
}
int partition(int a[],int left,int right,int pindex){
    int pivot = a[pindex];
    swap(a[pindex],a[right]);
    pindex = left;
    for(int i=left;i<right;i++){
        if(a[i]<=pivot){
            swap(a[i],a[pindex]);
            pindex++;
        }
    }
    swap(a[pindex],a[right]);
    return pindex;   
}
int quickselect(int a[],int left,int right,int k){
    if(left==right){
        return a[left];
    }
    int pindex = left+rand()%(right-left+1);
    pindex= partition(a,left,right,pindex);
    if(k==pindex){
        return a[k];
    }
    else if(k<pindex){
        return quickselect(a,left,pindex-1,k);
    }
    else{
        return quickselect(a,pindex+1,right,k);
    }
}
int main(){
    int a[] = {7,4,6,3,9,1};
    int k =3;
    int N = sizeof(a)/sizeof(a[0]);
    printf("k th smallest is %d",quickselect(a,0,N-1,k));
    return 0;
} 