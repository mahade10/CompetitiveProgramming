#include<iostream>
using namespace std;
int main(){
    int n,i,k,j,T;

    while(1){
        cin>>n;
        if(n==0) break;
        for(i=1;i<=n;i++){
            for(k=1;k<=n-i;k++){
                cout<<" ";
            }
            for(k=1;k<=(2*i)-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(i=1;i<=n-1;i++){
            for(k=1;k<=i;k++){
                cout<<" ";
            }
            for(k=1;k<=2*(n-i)-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;

}
