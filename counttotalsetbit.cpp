using namespace std;

int count1(string a)
{
     int count=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='1')count++;
    }
    return count;
}
int count2(int n)
{
    string temp="";
    while(n>0)
    {
        int d=n%2;
        d=d+48;
        temp+=d;
        n=n/2;
    }
    for(int i=temp.length();i<4;i++)temp=temp+'0';
    reverse(temp.begin(),temp.end());
    return count1(temp);
}
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,sum=0;
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            x=count2(i);
            sum=sum+x;

        }
        cout<<sum<<endl;
    }
}
