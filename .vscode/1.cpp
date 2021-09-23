// Partition an array into two subarrays with the same sum


// Input:  {6, -4, -3, 2, 3}

// Output: The two subarrays are {6, -4} and {-3, 2, 3} having equal sum of 2



#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int n){
    int totalsum = accumulate(a,a+n,0);
    int sumsofar = 0;
    for(int i=0;i<n;i++){
        if(sumsofar==totalsum-sumsofar){
            return i;
        }
        sumsofar+=a[i];
    }
    return -1;

}
int main(){
    int a[]={6,-4,-3,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    int i= partition(a,n);
    if(i!=-1){
        copy(a,a+i,ostream_iterator<int>(cout," "));
        cout<<endl;
        copy(a+i,a+n,ostream_iterator<int>(cout," "));
    }
    else{
        cout<<"array cant be partitioned";
    }
    return 0;
}