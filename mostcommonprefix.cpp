#include<bits/stdc++.h>
sing namespace
bool fun(/*some parameter*/ )
{
    for(int i=0;i<y;i++)
    {
        if(a[i].length() <= x || a[i][x]!=w)
            return false;
    }
    return true;
}

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        string s=a[0];
        string temp = "";
        for(int i=0;i<s.length();i++)
        {
            if(fun(a,i,s[i],n))
            {
                temp=temp+s[i];
            }
            else  {
                break;
            }
        }
        (temp.size() == 0) ? cout<<-1<<endl : cout << temp << endl;
    }
}
