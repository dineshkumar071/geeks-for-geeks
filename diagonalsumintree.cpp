 #include<bits/stdc++.h>
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
void insert(Node *root,int a1,int a2,char lr){
	if(root==NULL){
		return;
	}
	if(root->data==a1){
		switch(lr){
			case 'L':root->left=new Node(a2);
			break;
			case 'R':root->right=new Node(a2);
			break;
		}
	}
	else{
		insert(root->left,a1,a2,lr);
		insert(root->right,a1,a2,lr);
	}
}
void inorder(Node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void diagonalSumUtil(Node* root, int vd, map<int, int> &diagonalSum)
{
     if(!root)
           return;
     diagonalSum[vd] += root->data;
     diagonalSumUtil(root->left, vd + 1, diagonalSum);
     diagonalSumUtil(root->right, vd, diagonalSum);
}
void diagonalSum(Node *root);
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int m=n;
		Node *root1=NULL;
		while(n-->0){
			int a1,a2;
			cin>>a1>>a2;
			char lr;
			scanf(" %c",&lr);
			if(root1==NULL){
				root1=new Node(a1);
				switch(lr){
					case 'L':root1->left=new Node(a2);
					break;
					case 'R':root1->right=new Node(a2);
					break;
				}
			}
			else{
				insert(root1,a1,a2,lr);
			}
		}
		diagonalSum(root1);
	}
}
void fun1(Node *root,int x ,map<int,int> &m)
{
    if(!root)return;
    m[x]+=root->data;
    fun1(root->left,x+1,m);
    fun1(root->right,x,m);
}
void diagonalSum(Node* root)
{
     map<int,int> m;
    fun1(root,0,m);
    map<int,int> :: iterator i;
    for( i=m.begin();i!=m.end();++i)cout<<i->second<<" ";
    cout<<endl;
    m.clear();
}
