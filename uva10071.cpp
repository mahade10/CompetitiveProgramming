#include<iostream>
using namespace std;
int main(){
    int v,t;
    while(1){
        cin>>v>>t;
        if(cin.eof()){
            break;
        }
        cout<<(v*t*2)<<endl;
    }
    return 0;
}
