#include<iostream>
using namespace std;
int main()
{
    int h1,m1,s1,h2,m2,s2,se=0,me=0,he=0,rs,rm,rh;
    cin>>h1>>m1>>s1;
    cin>>h2>>m2>>s2;
    rs = s2-s1;
    if(rs<0){
        rs =rs+60;
        me=1;
    }
    if(me == 1){
        m1= m1+1;

        if(m2<m1){
            rm = (m2+60)-m1;
            he=1;
        }
        else{
            rm = m2-m1;
        }
    }
    else{
        if(m2<m1){
            rm = (m2+60)-m1;
            he=1;
        }
        else{
            rm = m2-m1;
        }
    }
    if(he==1){
        h1 =h1+1;
        if(h2<h1){
            rh= (h2+24)-h1;
        }
        else{
            rh = h2-h1;
        }
    }
    else{
        if(h2<h1){
            rh= (h2+24)-h1;
        }
        else{
            rh = h2-h1;
        }

    }
    cout<<rh<<" "<<rm<<" "<<rs<<endl;
   return 0;

}
