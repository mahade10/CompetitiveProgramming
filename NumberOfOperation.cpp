#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i,l,c=0;
    l =  s.size();
    for(i=0;i<l;i++){

           if((s[i]!='+' && s[i]!= '-' && s[i] !='*'
           &&s[i] != '/')){
               c++;
           }
    }
    cout<<c-1<<endl;
    return 0;

}
