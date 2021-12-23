#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,k,la=0,x,y,idx,seq;
    cin>>n>>q;
    vector <vector <int>> ar(n);
    for(i=0;i<q;i++){
        cin>>k>>x>>y;
        if(k==1){
            idx = (x ^ la)%n;
            ar[idx].push_back(y);

        }
        else{
            idx = (x ^ la)%n;
            seq = (y %  ar[idx].size());
            la = ar[idx][seq];
            cout<<la<<endl;
        }
    }
    return 0;
}
