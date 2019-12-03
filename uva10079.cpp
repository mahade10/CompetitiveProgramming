#include<bits/stdc++.h>
using namespace std;
int main(){
    long  int n,r;

    while(1){
        cin>>n;
        if(n>=0){
            r = n*(n+1)/2+1;
            cout<<r<<endl;
        }
        else{
            break;
        }
    }
    return 0;
}
