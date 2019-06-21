/*You are required to complete below method */
void countDistinct(int A[], int k, int n)
{

   for(int i=0,j=k-1;i<k,j<n;i++,j++)
   {
        int count1=0;
      for(int x=i;x<=j;x++)
      {
          for(int y=x+1;y<=j;y++)
          {
              if(A[x]==A[y])
              {
                  count1--;
                  break;
              }
          }
          count1++;
      }

      cout<<count1<<" ";
   }
}
