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
        int count1=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                count1++;
                cout<<count1<<" ";
                st.push(count1);
            }
            else if(s[i]==')')
            {
                cout<<st.top()<<" ";
                st.pop();
            }
        }
        cout<<endl;
    }
}
