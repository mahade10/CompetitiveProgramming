#include<iostream>
using namespace std;
int main(){
    string s;
    int i,j,len,c=0;
    cin>>s;
    len = s.size();
    for(i=0;i<len;i++){
        bool a = false;
        for(j=0;j<i;j++){
           if(s[j]==s[i]){
            a = true;
            break;
           }
        }
        if(!a){
            c++;
        }
    }
    if(c%2!=0){
        cout<<"IGNORE HIM!\n";
    }
    else{
        cout<<"CHAT WITH HER!\n";
    }
    return 0;
}
