/*You need to complete this function */
#include<bits/stdc++.h>
using namespace std;
int bin_search(int A[],int left,int right,int k);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
            cin>>a[i];
        int key;
        cin>>key;
        int found = bin_search(a,0,N-1,key);
        cout<<found<<endl;
    }
}
int bin_search(int A[], int left, int right, int k)
{
   int q;
    int x,flag=0;
    if(right>=left)
    {
        q=left+(right-left)/2;
        if(A[q]==k) return q;

        if(A[q]>k) return bin_search(A,left,q-1,k);

        return bin_search(A,q+1,right,k);
    }

        return -1;

}
