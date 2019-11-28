#include<bits/stdc++.h>
using namespace std;
void func(string a,string b){
    transform(a.begin(),a.end(),a.begin(), ::tolower);
     transform(b.begin(),b.end(),b.begin(), ::tolower);
     if(a.compare(b) == 0){
        cout<<0<<endl;
     }
     else if(a.compare(b)<0){
        cout<<-1<<endl;
     }
     else{
        cout<<1<<endl;
     }

}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    func(s1,s2);
    return 0;
}
