#include<iostream>
using namespace std;
int main(){
    int i,j,k,a,b,c,sum=0;
    cin>>a>>b>>c;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            for(k=1;k<=c;k++){
                sum =sum + (i*j*k);
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
