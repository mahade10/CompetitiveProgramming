#include<iostream>
#include <algorithm>
using namespace std;
int n;
int main()
{
    cin>>n;
    int a[n],i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,a+n);
     for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
