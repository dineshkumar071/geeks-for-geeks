#include<bits/stdc++.h>
using namespace std;
bool isvowel(char a)
{
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        return true;
    return false;
}
int main(void)
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int Count1 =0;
        for(int i=0;i<s.length();i++)
        {
            if(isvowel(s[i]))
            {
                cout<<s[i];
                Count1++;
            }
            if(s[i]==' ')
                cout<<" ";
        }
        (Count1==0) ? cout<<"No Vowel"<<endl : cout<<endl;
     }
}
