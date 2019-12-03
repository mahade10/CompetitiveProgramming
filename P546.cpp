#include<iostream>
using namespace std;
int main(){
    int k,i,n,w,sum=0,r;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
        sum =sum + k*i;
    }
    r = sum - n;
    if(r>0){
        cout<<r<<endl;
    }
    else{
        r=0;
        cout<<r<<endl;
    }
    return 0;
}
