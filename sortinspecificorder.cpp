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
        vector<int> v,v1;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)v.push_back(a[i]);
            else v1.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        for(int i=v1.size()-1;i>=0;i--)cout<<v1[i]<<" ";
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
    }

}
