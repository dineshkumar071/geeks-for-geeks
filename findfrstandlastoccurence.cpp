
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,flag=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
      int k,x;
      cin>>k;
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
              cout<<x<<" "<<(x+count)-1<<endl;
              flag=1;
              break;
          }

      }
      if(flag==0)cout<<"-1"<<endl;
  }
}
