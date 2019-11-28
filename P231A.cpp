#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,counts=0,s;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        s = a+b+c;
        if(s == 2||s == 3){
            counts++;
        }
    }
    cout<<counts<<endl;
    return 0;
}
