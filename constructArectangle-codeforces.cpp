#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,r;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(a==b){
            if(c%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else if(b==c){
            if(a%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
         else if(a==c){
            if(b%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else{
            if(a+b == c)
                cout<<"YES\n";
            else if(b+c == a)
                cout<<"YES\n";
            else if(a+c == b)
                cout<<"YES\n";
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;


}
