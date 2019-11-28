#include<bits/stdc++.h>>
using namespace std;
int main()
{
    long long int q,a,b,n,s,r=0,i,c=0;

    scanf("%lld",&q);
    while(q--){
            c=0;
       scanf("%lld %lld %lld %lld",&a,&b,&n,&s);
      for(i=0;i<=a;i++){
        if((n*i)==s){
            printf("YES\n");
            c=1;
            break;
        }
        if((n*i)>s)break;

        r = s-(n*i);

        if(r<=b){
            printf("YES\n");
            c=1;
            break;
        }

      }
      if(c==0)
         printf("NO\n");
    }
    return 0;
}
