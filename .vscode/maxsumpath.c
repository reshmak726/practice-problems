// Input:
 
// X = { 3, 6, 7, 8, 10, 12, 15, 18, 100 }
// Y = { 1, 2, 3, 5, 7, 9, 10, 11, 15, 16, 18, 25, 50 }
 
 
// The maximum sum path is:
 
// 1 —> 2 —> 3 —> 6 —> 7 —> 9 —> 10 —> 12 —> 15 —> 16 —> 18 —> 100
 
// The maximum sum is 199

#include<stdio.h>
int max(int x,int y){
    return(x>y)? x:y;
}
int maxsum(int x[],int y[],int m,int n){
    int sum=0;
    int sum_x=0,sum_y=0;
    int i=0,j=0;
    while(i<m && j<n){
        while(i<m-1 && x[i]==x[i+1]){
            sum_x+=x[i++];
        }
        while(j<n-1 && y[j]==y[j+1]){
            sum_y+=y[j++];
        }
        if(y[j]<x[i]){
            sum_y+=y[j];
            j++;
        }
        else if(x[i]<y[j]){
            sum_x+=x[i];
            i++;
        }
        else{
            sum+= max(sum_x,sum_y)+x[i];
            i++,j++;
            sum_x = 0,sum_y=0;
        }
    }
    while(i<m){
        sum_x+=x[i++];
    }
    while (j<n)
    {
        sum_y+=y[j++];
    }
    sum+= max(sum_x,sum_y);
    return sum;
    
}
int main(){
    int x[] = {3,6,7,8,10,12,15,18,100};
    int y[] = {1,2,3,5,7,9,10,11,15,16,18,25,50};
    int m = sizeof(x)/sizeof(x[0]);
    int n = sizeof(y)/sizeof(y[0]);
    printf("max sum is %d",maxsum(x,y,m,n));
    return 0;
}