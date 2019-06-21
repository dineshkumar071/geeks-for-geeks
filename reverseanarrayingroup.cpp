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
        //vector<int> v,v1;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i=i+d)
        {
            for(int j=i+d-1;j>=i;j--)
            {
               if(j>n)
                    continue;
               else
                    cout<<a[j]<<" ";
            }
           // cout<<endl;

        }
        cout<<endl;
        //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    }
}
