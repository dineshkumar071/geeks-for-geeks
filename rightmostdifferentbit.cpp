using namespace std;
string count2(int n)
{
    string temp="";
    while(n>0)
    {
        int d=n%2;
        d=d+48;
        temp+=d;
        n=n/2;
    }
    for(int i=temp.length();i<16;i++)temp=temp+'0';
    //reverse(temp.begin(),temp.end());
    return temp;
}
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        string a,b;
        a=count2(m);
        b=count2(n);
        for(int i=0;i<a.length();i++)
        {
            if(a[i]!=b[i])
            {
                cout<<i+1;
                break;
            }
        }
        cout<<endl;
    }
}
