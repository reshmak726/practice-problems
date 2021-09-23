
// Find two numbers with maximum sum formed by array digits


// Input:  { 4, 6, 2, 7, 9, 8 }
// Output: The two numbers with maximum sum are 974 and 862

#include<bits/stdc++.h>
using namespace std;
pair<int ,int> findmax(vector<int> input){
    if(input.size()<=1){
        return make_pair(-1,-1);
    }
    sort(input.rbegin(),input.rend());
    int x=0;
    for(int i=0;i<input.size();i=i+2){
        x = x*10+input[i];
    }
    int y=0;
    for(int i=1;i<input.size();i=i+2){
        y = y*10+input[i];
    }
    return make_pair(x,y);
}
int main(){
    vector<int> input = {4,6,2,7,9,8};
    pair<int,int> p = findmax(input);
    cout<<"the 2 no with max sum are "<<p.first<<" and " <<p.second;
    return 0;
}