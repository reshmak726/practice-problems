#include<iostream>
#include<string>
using namespace std;
int main(){
    int i;
    string in,out = "";
    getline(cin,in);
    int len=in.length();
    int ascii[128] = {0};
    if(len>0){
        for(int i=0;i<len;i++){
            if(in[i]=='A' || in[i]=='E' || in[i]=='I' ||in[i] =='O' || in[i]=='U' || in[i]=='a' || in[i]=='e' || in[i]=='i' || in[i]=='o' || in[i]=='u');
        }
        ascii[in[i]]++;
    }
    else{
        if(in[i]>='0'&&in[i]<='9'){
            cout<<"0";
            return 0;
        }
        else{
            out+=in[i];
        }
    
    int outlen=out.length();
    if(outlen!=len){
        cout<<"a:"<<ascii['A']+ascii['a']<<endl;
        cout<<"e:"<<ascii['E']+ascii['e']<<endl;
        cout<<"i:"<<ascii['I']+ascii['i']<<endl;
        cout<<"o:"<<ascii['O']+ascii['o']<<endl;
        cout<<"u:"<<ascii['U']+ascii['u']<<endl;
        cout<<out;
    }
    else{
        cout<<"0";
        return 0;
    }
        // else
        //     cout<<"invalid input";    
}
    }

    