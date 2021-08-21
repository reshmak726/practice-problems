#include<iostream>
#include<string>
using namespace std;
int main(){
    string s[12],in;
    int total = 0,count =0;
    cin>>in;
    while(in!="q" && in!="Q")
    {
        if(count == 12){
            cout<<"max limit of teams is 12.";
            return 0;
        }
        s[count++]=in;
        cin>>in;
    }
    if(count>=3){
        int n =count -1;
        n=(n-1)*n;
        cout<<"total matches:"<<n<<endl;
        for(int i=0;i<count-1;i++){
            for(int j=i+1;j<count;j++){
                cout<<s[i]<<" vs "<<s[j]<<endl;
            }
        }
        
    }
    else{
        cout<<"min 3 teams are required";
    }

    return 0;
}