using namespace std;
int main(void)
{
  int t;
  cin>>t;
  while(t--)
  {
      int m,n,flag=0;
      cin>>m>>n;
      string temp="";
      while(m>0)
        {
            int d=m%2;
            d=d+48;
            temp+=d;
            m=m/2;
        }
      if(temp[n]=='1')cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
  }
}
