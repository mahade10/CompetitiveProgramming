#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[6][6],i,j,b[16]={0},z=0,s=0,re;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    /*cout<<endl;
      for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
      }*/
      for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            s = a[i][j] + a[i][j+1] + a[i][j+2] +a [i+1][j+1] +a [i+2][j] + a[i+2][j+1] + a[i+2][j+2];
            //cout<<s<<" ";
            b[z++]=s;
            s=0;
        }
      }
      /*for(i=0;i<16;i++){
        cout<<b[i]<<" ";
      }*/
    re = *max_element(b,b+16);
    cout<<re<<endl;

}
