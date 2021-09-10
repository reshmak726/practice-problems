// Find pairs with difference `k` in an array
// k


// Input:
 
// arr = [1, 5, 2, 2, 2, 5, 5, 4]
// k = 3
 
// Output:
 
// (2, 5) and (1, 4)


#include<bits/stdc++.h>
using namespace std;
   void findpair(int a[],int n,int diff){
        sort(a,a+n);
        unordered_set<int> set;
        for(int i=0;i<n;i++){
            while(i+1<n && a[i]==a[i+1]){
                i++;
            }
            if(set.find(a[i]-diff)!=set.end()){
                cout<< "(" << a[i] << "," << a[i]-diff <<")\n";
            
            }
            if(set.find(a[i]+diff)!=set.end()){
                cout<< "(" << a[i]+diff <<"," << a[i] <<")\n";
            }
            set.insert(a[i]);
        }
    }
int main(){
    int a[]={1,5,2,2,2,5,5,4};
    int diff = 3;
    int n = sizeof(a)/sizeof(a[0]);
    findpair(a,n,diff);
 
    return 0;
}