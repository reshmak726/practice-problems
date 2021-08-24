// In-place merge two sorted arrays
// Input:
 
// X[] = { 1, 4, 7, 8, 10 }
// Y[] = { 2, 3, 9 }
 
// Output:
 
// X[] = { 1, 2, 3, 4, 7 }
// Y[] = { 8, 9, 10 }


#include<iostream>
#include<algorithm>
using namespace std;
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void merge(int x[],int y[],int m,int n){
    for(int i=0;i<m;i++){
        if(x[i]>y[0]){
            swap(x[i],y[0]);
            int first = y[0];
            int k;
            for(k=1;k<n && y[k]<first;k++){
                y[k-1] =y[k];
            }
            y[k-1] =first; 
        }
    }

}

int main(){
    int x[] = {2,4,6,7};
    int y[] = {1,3,5,8};
    int m = sizeof(x)/sizeof(x[0]);
    int n = sizeof(y)/sizeof(y[0]);
    merge(x,y,m,n);
    cout<<"x: "; printarray(x,m);
    cout<<"y: "; printarray(y,n);
    return 0;
}