#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum=1;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j) continue;
            sum = sum*a[j];
        }
        b[i] = sum;
        cout<<b[i];
        if(i!=n-1){
            cout<<" ";
        }

        sum =1;
    }
    cout<<endl;
    return 0;
}

