#include<iostream>
using namespace std;
int main(){
    int n,l,i,sum=0;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        l = s.size();
        for(i=0;i<l;i++){
            if(s[i]=='X'){
                if(s[i+1]=='+' || s[i-1] == '+'){
                    sum=sum+1;
                }
                else if(s[i+1] == '-'||s[i-1] == '-'){
                    sum =sum-1;
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
