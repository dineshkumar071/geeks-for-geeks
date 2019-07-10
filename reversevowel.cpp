#include<bits/stdc++.h>
using namespace std;
bool isvowel(char b){return (b=='a'||b=='e'||b=='i'||b=='o'||b=='u');}
int main(void)
{

    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int j=a.length()-1,k=0;
        while(k<j)
        {
            if(isvowel(a[k])&&isvowel(a[j]))
            {
                char temp =a[k];
                a[k]=a[j];
                a[j]=temp;
                k++;
                j--;
            }else if(!isvowel(a[k]))
            {
                k++;
            }
            else
                j--;
        }
        cout<<a<<endl;
    }


}
