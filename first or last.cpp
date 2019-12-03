#include<iostream>
using namespace std;
int main()
{
    string s;
    int l;
    cin>>s;
    if((s[0]-'0')== (s[2]-'0')){
        cout<<"=\n";
    }
    else if((s[0]-'0') > (s[2]-'0')){
        cout<<s[0]<<endl;
    }
    else{
        cout<<s[2]<<endl;
    }
    return 0;
}
