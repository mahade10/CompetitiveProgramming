#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char ch;
    int n,i,j,k;
    cin>>s;
    n = s.size();
    for(i=0;i<n;i++){
        if(s[i]!='A'&& s[i]!='a' && s[i]!='e' && s[i]!='E'&& s[i]!='i'
           && s[i]!='I'&& s[i]!='o'&& s[i]!='O'&& s[i]!='u'&& s[i]!='U'
            && s[i]!='y' && s[i]!='Y'){
            if((s[i]>='A' && s[i]<='Z')){
                    ch = s[i] +32;
                 cout<<"."<<ch;
            }
            else{
                cout<<"."<<s[i];
            }

        }

    }

    return 0;
}
