#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function(s) below*/
#include<bits/stdc++.h>
void push(int a)
{
     s.push(a);
}
bool isFull(int n)
{
    static int count=0;
    if(count==n)
    {
        count=0;
        return true;
    }
    else
    {
        count++;
        return false;
    }
}
bool isEmpty()
{
    if(s.empty())return true;
    else return false;
}
int pop()
{
    s.pop();
    return s.top();
}
int getMin()
{
    vector<int> v;
   while(!s.empty())
   {
       v.push_back(s.top());
       s.pop();
   }
   sort(v.begin(),v.end());
   return v[0];
}
