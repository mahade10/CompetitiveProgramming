#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p=0,cnt=0,l;
    string s;
    cin>>s;
    l = s.size();
    for(i=0;i<l;i++){
        if(s[i]==s[i+1]){
            cnt++;
            if(cnt==6){
                p=1;
                break;
            }
        }
          if(s[i]!=s[i+1]){
            cnt=0;
        }
    }

    if(p==0) cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
