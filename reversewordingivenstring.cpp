#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    string a;
    for(int i=0;i<test;i++)
    {
        cin>>a;
        a=a+".";
        string temp;
        vector<string> v;
        for(int j=0;j<a.length();j++)
        {
            if(a[j]=='.')
            {
              // reverse(temp.begin(), temp.end());
                v.push_back(temp);
                temp="";
            }
            else
            {
                temp=temp+a[j];
            }
        }
        int a=v.size();
        for(int j=a-1;j>=0;j--)
        {
            if(j== 0)
            {
                cout<<v[j];
            }
            else
            {
            cout<<v[j]<<".";
            }
        }
        cout<<endl;
    }

}
