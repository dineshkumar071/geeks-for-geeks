#include<bits/stdc++.h>
using namespace std;
 string s;
 int r,n;
 void swap1(char& a,char& b)
 {
     char temp;
     temp=a;
     a=b;
     b=temp;
 }

 vector<string> v;
 void sub(string a,int x,int y)
 {
    if(x==y)
    {
       // cout << a << endl;
        v.push_back(a);

    }
    else
    {
        for(int j=x;j<=y;j++)
        {
            swap1(a[x],a[j]);
            sub(a,x+1,y);
            swap1(a[x],a[j]);
        }
    }
 }
int  main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        r=0,n=s.length()-1;
        sub(s,0,n);
        //cout<<v.size();
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        v.clear();
        cout<<endl;
    }
}

