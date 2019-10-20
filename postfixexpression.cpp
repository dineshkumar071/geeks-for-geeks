#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<int> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                st.push(s[i]-'0');
            }

            else if(s[i]=='/')
            {
              int x=st.top();
              st.pop();
              int y=st.top();
              st.pop();
              st.push(y/x);
            }

            else if(s[i]=='*')
            {
              int x=st.top();
              st.pop();
              int y=st.top();
              st.pop();
              st.push(y*x);
            }

            else if(s[i]=='-')
            {
                int x=st.top();
              st.pop();
              int y=st.top();
              st.pop();
              st.push(y-x);
            }

            else if(s[i]=='+')
            {
              int x=st.top();
              st.pop();
              int y=st.top();
              st.pop();
              st.push(y+x);
            }
        }
        cout<<st.top()<<endl;
    }
}
