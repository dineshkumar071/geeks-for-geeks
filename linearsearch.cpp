#include<bits/stdc++.h>
using namespace std;
int main(void)
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
      int k,x,flag=0;
      cin>>k;
      for(int i=0;i<n;i++)
      {
          if(a[i]==k)
          {
              flag=1;
              x=i;
              break;
          }
      }(flag==1)?cout<<x<<endl:cout<<"-1"<<endl;
  }
}
