kl#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
int getLevelDiff(Node *root);
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = (struct Node*)
                       malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d
",&n);
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
   cout<<getLevelDiff(root);
     cout << endl;
  }
  return 0;
}

vector<int> v;
int height1(Node *root)
        {

            if(root==NULL)
            {
                return 0;
            }
            else
            {
                int lfhei=height1(root->left);
                int rfhei=height1(root->right);
                if(lfhei>rfhei)return(lfhei+1);
                else return (rfhei+1);
            }
        }
void p2(Node* root,int l)
        {
            if(root==NULL)return;
            if(l==1)v.push_back(root->data);
            else if(l>1)
            {
                p2(root->left,l-1);
                p2(root->right,l-1);
            }
        }
int getLevelDiff(Node *root)
{
    int even=0,odd=0;
           int x=height1(root);
           for(int i=1;i<=x;i++)
           {
               int sum=0;
               p2(root,i);
               if(i%2==0)
               {
                    for(int i=0;i<v.size();i++)sum=sum+v[i];
                    even=even+sum;
               }
               else
               {
                     for(int i=0;i<v.size();i++)sum=sum+v[i];
                     odd=odd+sum;
               }
               v.clear();
           }
           return(odd-even);
//cout<<odd-ev
}

