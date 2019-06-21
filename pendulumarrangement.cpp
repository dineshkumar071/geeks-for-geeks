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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
           if(i%2==0)v.push_back(a[i]);
           else v1.push_back(a[i]);
        }
        for(int i=v.size()-1;i>=0;i--)cout<<v[i]<<" ";
        for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
        cout<<endl;
    }
}
