using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
        {
            long n,sum=0,sum1=0;
            cin>>n;
            vector<int> v(n);
            for(int i=1;i<=n;i++)sum=sum+i;
            for(int i=0;i<n-1;i++)
            {
                cin>>v[i];
                sum1=sum1+v[i];
            }
            int d=abs(sum-sum1);
            cout<<d<<endl;


        }
}

