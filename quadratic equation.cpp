#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,sum1,sum2,d,m,n;
    cin>>a>>b>>c;
    d = (b*b) - (4*a*c);

    if(d<0){
        cout<<"No roots\n";
    }
    else if(d>0){
        sum1 = ((-b) + sqrt(d))/(2*a);
        sum2  = ((-b) - sqrt(d))/(2*a);
        m = max(sum1,sum2);
        n = min(sum1,sum2);
        cout<<"Two roots: "<<n<<" "<<m<<endl;
    }
    else{
          sum1 = ((-b) + sqrt(d))/(2*a);
          cout<<"One root: "<<sum1<<endl;
    }
    return 0;
}
