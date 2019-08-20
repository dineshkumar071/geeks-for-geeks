#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0,x;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int ls=0,rs=0;
        for(int i=0;i<n;i++)rs=rs+a[i];
        for(int i=0;i<n;i++)
        {
          rs=rs-a[i];
          if(rs==ls)
          {
              x=i+1;
              flag=1;
              break;
          }
          ls=ls+a[i];
        }
        if(flag==1)cout<<x<<endl;
        else cout<<"-1"<<endl;

    }
}

