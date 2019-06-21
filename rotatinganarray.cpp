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
        int d;
        cin>>d;
        for(int i=0;i<d;i++)v.push_back(a[i]);
        for(int i=d;i<n;i++)cout<<a[i]<<" ";
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
    }
}
