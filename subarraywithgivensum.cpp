using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,flag=0,x,y;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)
        {
            int b=d;
            for(int j=i;j<n;j++)
            {
                b=b-a[j];

                if(b<0)
                {
                    b=d;
                    break;
                }
                if(b==0)
                {
                    x=i+1;
                    y=j+1;
                    flag=1;
                }
                if(flag==1)break;
                //cout<<b<<" ";

            }if(flag==1)break;
        }
        if(flag==1)
        {
            cout<<x<<" "<<y;
        }else
        {
            cout<<"-1";
        }
        cout<<endl;

        //cout<<endl;


    }
}
