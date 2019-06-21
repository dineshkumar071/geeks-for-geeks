using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int> v;
        for(int i=0;i<n;i++)cin>>a[i];
        int mac=a[n-1];

        for(int i=n-1;i>=0;i--)
        {
            if(mac<=a[i])
            {
                mac=a[i];
                v.push_back(mac);
            }

        }
        for(int i=v.size()-1;i>=0;i--)cout<<v[i]<<" ";
        cout<<endl;
    }

}
