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
        //for(int i=0;i<n;i++)cout<<a[i];
        for(int i=0;i<n;i++)
        {
             int count=0;
            for(int j=i;j>=0;j--)
            {
                if(a[i]>=a[j])count++;
                else break;
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }
}
