/*You are required to complete this method */
int remainderWith7(string n)
{
   int s[]={1,3,2,-1,-3,-2};
   int result=0;
   int series=0;
   for(int i=n.length()-1;i>=0;i--)
   {
       int digit=n[i]-'0';
       result+=digit*s[series];
       series=(series+1)%6;
       result%=7;
   }
   if(result<0)
   {
       result=(result+7)%7;
   }
   return result;
}
