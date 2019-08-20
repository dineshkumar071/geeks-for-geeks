#include<bits/stdc++.h>
using namespace std;
bool fun1(string s)
{
    string a;
    a=s;
    reverse(s.begin(),s.end());
    if(s==a)return true;
    else return false;
}
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<string> v,v1;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                string temp="";
              for(int k=i;k<=j;k++)
              {
                  temp=temp+s[k];
              }
              v.push_back(temp);
            }
        }
        for(int i=0;i<v.size();i++)if(fun1(v[i]))v1.push_back(v[i]);
        sort(v1.begin(),v1.end());
        //for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
        vector<int> z;
        int count=v1.size();
        for(int i=0;i<v1.size();i++)
        {
            string a=v1[i];
            int x=0;
            while(v1[i]==a)
            {
                x++;
                i++;
            }i--;
          z.push_back(x);


        }
        cout<<z.size();
        cout<<endl;
    }
}
