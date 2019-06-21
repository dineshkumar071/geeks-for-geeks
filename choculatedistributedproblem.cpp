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
     for(int i=0;i<n;i++)cin>>a[i];
     int d;
     cin>>d;
     sort(a,a+n);
     int y = a[d-1]-a[0];
     for(int i=0,j=d-1;i<d,j<n;i++,j++)
     {

       int  x=a[j]-a[i];
        if(x<y)
            y=x;

     }
     cout<<y<<endl;
 }
}
