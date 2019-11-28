#include<iostream>
using namespace std;
int main(){
    int a[11]={4,7,44,47,77,444,447,477,744,747,777};
    int n,i,c=0;
    cin>>n;
    for(i=0;i<11;i++){
        if(n % a[i]== 0){
            cout<<"YES";
            c=1;
            break;
        }
    }
    if(c==0){
        cout<<"NO";
    }
}
