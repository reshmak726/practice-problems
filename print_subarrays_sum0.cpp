// Print all subarrays with 0 sum
// Input:  { 4, 2, -3, -1, 0, 4 }
 
// Subarrays with zero-sum are
 
// { -3, -1, 0, 4 }
// { 0 }


 #include<iostream>
 #include<unordered_map>
 using namespace std;
 void printsubarray(int arr[],int n){
     int sum;
     for(int i = 0;i<n;i++){
         int sum = 0;
         for(int j = i;j<n;j++){
             sum+=arr[j];
             if(sum == 0){
                 cout<<"subarray["<< i <<".."<<j<< "]\n";
             }
             
         }
        
     }
     if(sum!=0){
            cout<<"no subarray";
        }
 }  
 int main()
 {
     int arr[] = { 1, -1, -2, 2, 4, 6, 5};
     int n = sizeof(arr)/sizeof(arr[0]);

     printsubarray(arr,n);
     return 0;
 }