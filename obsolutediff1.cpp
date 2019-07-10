#include<bits/stdc++.h>
using namespace std;
bool isdiff(long long a)
{
    int flag=1;
    vector<long long> v;
    while(a>0)
    {
        long long  d=a%10;
        v.push_back(d);
        a=a/10;
    }
    for(int i=0;i<v.size()-1;i++)
    {
        int x=abs(v[i]-v[i+1]);
        if(x!=1)flag=0;
    }
    v.clear();
    if(flag==1)return true;
    else return false;
}
int main(void)
{
    long t;
    cin>>t;
    while(t--)
    {
        int n,k,flag=0;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        vector<long long> z;
        for(long i=0;i<n;i++)
        {
           if(a[i]>10&&a[i]<k)
           {
               z.push_back(a[i]);
           }
        }
        for(long i=0;i<z.size();i++)
        {
            if(isdiff(z[i]))
            {
                cout<<z[i]<<" ";
                flag++;
            }

        }
        if(flag==0)cout<<"-1";

        cout<<endl;
    }

}
