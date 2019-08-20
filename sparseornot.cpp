using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        string temp="";
        while(n>0)
        {
            int d=n%2;
            d=d+48;
            temp+=d;
            n=n/2;
        }
        for(int i=0;i<temp.length();i++)
        {
            if(temp[i]=='1'&&temp[i+1]=='1')flag=1;
        }
        if(flag==1)cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
}
