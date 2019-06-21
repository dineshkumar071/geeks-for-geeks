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
        vector<int> v;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(i>=d)v.push_back(a[i]);
        }
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        for(int i=0;i<d;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}
