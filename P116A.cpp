#include<iostream>
using namespace std;
int main()
{
    int n,a,b,p=0,sum=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        sum =sum - a+ b;
        if(p<=sum){
            p=sum;
        }
    }
    cout<<p<<endl;
    return 0;
}
