// Input:  {3, 4}, {1, 2}, {5, 2}, {7, 10}, {4, 3}, {2, 5}
 
// Output:
 
// {4, 3} | {3, 4}
// {2, 5} | {5, 2}


#include<bits/stdc++.h>
using namespace std;
struct Pair
{
    int x,y;
};
template<typename T,size_t n>
void findpairs(T const(& pair)[n]){
    unordered_set<string> set;
    for(int i=0;i<n;i++){
        string p = "{" + to_string(pair[i].x)+","+ to_string(pair[i].y)+ "}";
        set.insert(p);
        string reverse_pair = "{" + to_string(pair[i].y)+","+ to_string(pair[i].x)+ "}";
        if(set.find(reverse_pair)!=set.end()){
            cout<< p << " | " << reverse_pair<<endl;
        }
    }
}

int main(){
    Pair pair []= {{3, 4}, {1, 2}, {5,2},{7,10},{4,3},{2,5}};
    findpairs(pair);
    return 0;
}