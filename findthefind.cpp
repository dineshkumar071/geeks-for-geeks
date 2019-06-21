using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,d,sum=0;
        cin>>n>>d;
        long int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        if(d%2==0)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==1)sum=sum+b[i];
            }
            cout<<sum<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==0)sum=sum+b[i];
            }
            cout<<sum<<endl;
        }

    }
}
