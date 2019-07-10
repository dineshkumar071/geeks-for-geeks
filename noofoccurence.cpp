#include<bits/stdc++.h>
using namespace std;
int main(void)
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,k,x,flag=0;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
      for(int i=0;i<n;i++)
      {
          if(a[i]==k)
          {
              int count=0;
              x=i;
              while(a[i]==k)
              {
                  i++;
                  count++;
              }i--;
              cout<<count<<endl;
              flag=1;
              break;
          }

      }
      if(flag==0)cout<<"-1"<<endl;
  }
}
