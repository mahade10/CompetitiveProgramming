#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double ab,ae,de,ac,bc,ratios,ade,abc,bdec,res;
    cin>>t;
    double h,ub,lb,mid,s1,s2;
    for(int i=1;i<=t;i++){

        cin>>ab>>ac>>bc>>ratios;
        lb=0.0;
        ub=ab;
        while((ub-lb)>.0000001){
        mid =(ub+lb)/2;
        ae=(mid*ac)/ab;
        de=(mid*bc)/ab;
        s1=(mid+ae+de)/2;
        ade=sqrt(s1*(s1-mid)*(s1-ae)*(s1-de));
        s2=(ab+ac+bc)/2;
        abc=sqrt(s2*(s2-ab)*(s2-ac)*(s2-bc));
        bdec=abc-ade;
        res=ade/bdec;
        if(res<ratios){
             lb=mid;
            }
            else
                ub=mid;
        }
        printf("Case %d: %.10lf\n",i,mid);

    }
}
