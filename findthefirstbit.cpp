using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a="";
        while(n>0)
        {
            int d=n%2;
            int e=d+48;
            a=a+(char)e;
            n=n/2;
        }
        int x,flag=0;
        //cout<<a<<endl;
       for(int i=0;i<a.length();i++)
       {
           if(a[i]=='1')
           {
               x=i+1;
               flag=1;
               break;
           }
           else
             flag=0;
       }
       if(flag==1)cout<<x<<endl;
       else cout<<"0"<<endl;
    }
}
