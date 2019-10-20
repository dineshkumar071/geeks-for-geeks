#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;

	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};
void printInorder(Node* node)
{
	if (node == NULL)return;
	printInorder(node->left);
	cout<<node->data<<" ";
	printInorder(node->right);
}
void pairwiseSwap(Node *root);
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
            root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     pairwiseSwap(root);
     printInorder(root);
     cout<<"if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)

";
  }
  return 0;
}
vector<int> v;
int x;
void fun1(Node *node1);
void fun2(Node *node1);
void pairwiseSwap(Node *root)
{
    v.clear();
    x = 0;
     fun1(root);
     for(int i=0;i<v.size();i=i+2)
     {
         if (i + 1 < v.size())
             swap(v[i],v[i+1]);
     }
     fun2(root);
}

void fun1(Node *root)
{
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL)
    {
       v.push_back(root->data);
    }
    else
    {
        fun1(root->left);
        fun1(root->right);
    }
}
void fun2(Node *root)
{
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL)
    {
       root->data=v[x];
       x++;
    }
    else
    {
        fun2(root->left);
        fun2(root->right);
    }
}
