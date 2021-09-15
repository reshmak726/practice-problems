// Find the minimum difference between the index of two given elements present in an array
// Input:
 
// arr = { 1, 3, 5, 4, 8, 2, 4, 3, 6, 5 }
// x = 3, y = 2
 
// Output: 2
 
// Explanation: Element 3 is present at index 1 and 7, and element 2 is present at index 5. Their minimum absolute difference is min(abs(1-5), abs(7-5)) = 2
 
// #include<bits/stdc++.h>
// using namespace std;
#include<stdio.h>
#include<limits.h>
#include<math.h>
int min(int x,int y){
    return (x<y)?x:y;
}
int finddifference(int a[],int n,int x,int y){
    if(n<=1){
        return;
    }
    int x_index=n;
    int y_index=n;
    int mindiff=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]==x){
           x_index=i; 
           if(y_index!=n){
               mindiff=min(mindiff,abs(x_index-y_index));
           }
        }
        if(a[i]==y){
            y_index=i;
            if(x_index!=n){
                mindiff=min(mindiff,abs(x_index-y_index));
            }
        }
    }
    return mindiff;
}
int  main(void){
    int a[]={1,3,5,4,8,2,4,3,6,5};
    int n=sizeof(a)/sizeof(a[0]);
    int x = 2;
    int y=5;
    int diff=finddifference(a,n,x,y);
    if(diff!=INT_MAX){
        printf("min difference is %d",diff);
    }
    else{
        printf("invalid input");
    }
    return 0;
}