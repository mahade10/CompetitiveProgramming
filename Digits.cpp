#include<iostream>
using namespace std;
int main()
{
    long long int n,c=0;
    int i=1;
    cin>>n;
    while(n!=0){
        n=n/10;
        c++;
        i=0;
    }
    if(i==0)cout<<c<<endl;
    else
        cout<<i<<endl;

    return 0;
}
