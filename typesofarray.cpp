using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        long a[n];
        vector<long> v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        long max1=v[v.size()-1];
        long min1=v[0];
        for(long i=0;i<v.size();i++)
        {
            if(v[i]<min1)min1=v[i];
        }
        for(long i=0;i<v.size();i++)
        {
            if(v[i]>max1)max1=v[i];
        }
       // sort(v.begin(),v.end());
       // long max1=v[v.size()-1];
       // long min1=v[0];
        if(a[0]==min1&&a[n-1]==max1)cout<<max1<<" "<<"1"<<endl;
        if(a[0]==max1&&a[n-1]==min1)cout<<max1<<" "<<"2"<<endl;
        for(long i=0;i<n;i++)
        {
            if(a[i]==min1&&a[i+1]==max1)
            {
                cout<<max1<<" "<<"3"<<endl;
                break;
            }
            if(a[i]==max1&&a[i+1]==min1)
            {
                cout<<max1<<" "<<"4"<<endl;
                break;
            }
        }

    }
}
