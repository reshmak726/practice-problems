// Input:  A[] = {2, 6, 0, 9, 7, 3, 1, 4, 1, 10}, target = 15
// Output: {6, 0, 9}

#include<iostream>
#include<unordered_map>
using namespace std;
void findsubarray(int a[],int n,int target){
    unordered_map<int,int> map;
    map.insert(pair<int,int>(0,-1));
    int sumsofar = 0;
    for(int i=0;i<n;i++){
        sumsofar+=a[i];
        if(map.find(sumsofar-target)!=map.end()){
            cout<< "subarray found [" <<map[sumsofar-target]+1 << " , "  << i << "]" <<endl;
            return;
        }
        map.insert(pair<int ,int >(sumsofar,i));
    }
}
int main(){
    int a[] = {2,6,1,5,4,7};
    int target = 10;
    int n = sizeof(a)/sizeof(a[0]);
    findsubarray(a,n,target);
    return 0;
}