using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int min1=abs(a[0]-d);
        int b=0,k=a[0];
        for(int i=0;i<n;i++)
        {
           b=abs(a[i]-d);
           if(b<min1)
           {
               min1=b;
               k=a[i];
           }
           if(b==min1)k=a[i];
        }
        cout<<k<<endl;
    }
}
