// Trains arrival   = { 2.00, 2.10, 3.00, 3.20, 3.50, 5.00 }
// Trains departure = { 2.30, 3.40, 3.20, 4.30, 4.00, 5.20 }
 
// The minimum platforms needed is 2
 
 
// The train arrived at 2.00 on platform 1
// The train arrived at 2.10 on platform 2
// The train departed at 2.30 from platform 1
// The train arrived at 3.00 on platform 1
// The train departed at 3.20 from platform 1
// The train arrived at 3.20 on platform 1
// The train departed at 3.40 from platform 2
// The train arrived at 3.50 on platform 2
// The train departed at 4.00 from platform 2
// The train departed at 4.30 from platform 1
// The train arrived at 5.00 on platform 1
// The train departed at 5.20 from platform 1



#include<bits/stdc++.h>
using namespace std;
typedef vector<double> trains;
int findminplatforms(trains arrival, trains departure){
    sort(arrival.begin(), arrival.end());
    sort(departure.begin(),departure.end());
    int count =0;
    int platforms =0;
    int i=0,j=0;
    while(i<arrival.size()){
        if(arrival[i]<departure[j]){
            platforms = max(platforms,++count);
            i++;
        }
        else{
            count--,j++;
        }
    }
    return platforms;
}
int main(){
    trains arrival={ 2.00, 2.00, 3.00, 3.20, 3.50, 5.00 };
    trains departure ={ 2.30, 3.40, 3.20, 4.30, 4.00, 5.20 };
    cout<<"min platforms needed is "<< findminplatforms(arrival,departure);
    return 0;
}