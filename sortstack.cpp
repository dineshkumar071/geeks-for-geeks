#include<bits/stdc++.h>
using namespace std;
class SortedStack{
public:
	stack<int> s;
	void sort();
};
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("
");
}
int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
}
/*This is a function problem.You only need to complete the function given below*/
/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/
/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack :: sort()
{
   vector<int> v;
   while(!s.empty())
   {
       v.push_back(s.top());
       s.pop();
   }
 // sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
            }
        }
    }
   for(int i=0;i<v.size();i++)
   {
       s.push(v[i]);
   }
}
