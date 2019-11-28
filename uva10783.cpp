#include<iostream>
using namespace std;
int main(){
    int t,i,a,b,j,sum=0;
    cin>>t;
    for(j=1;j<=t;j++){
        cin>>a>>b;
        sum=0;
        for(i=a;i<=b;i++){
            if(i%2!=0){
                sum= sum + i;
            }
        }
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
    return 0;
}
