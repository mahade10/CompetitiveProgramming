#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,dis,per,a,b,s,n,c,d,h =0;
    cin>>t;
    while(t--){
        cin>>n>>s>>a>>b;
        per = n-1;
        dis = abs(a-b);

        c= max(a,b);
        d = min(a,b);
        while(dis!=per && s!=0){
            if(c==n){
                c = 0;
            }
            c++;
            s--;

             h = dis;
             dis = abs(c-d);
            if(dis<h){
                dis = h;
                break;
            }
        }
        cout<<dis<<endl;
    }
    return 0;
}


