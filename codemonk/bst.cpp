#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data){
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}

 void printPostorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    // first recur on left subtree 
    printPostorder(node->left); 
  
    // then recur on right subtree 
    printPostorder(node->right); 
  
    // now deal with the node 
    cout << node->data << " "; 
} 
void printInorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(node->left); 
  
    /* then print the data of node */
    cout << node->data << " "; 
  
    /* now recur on right child */
    printInorder(node->right); 
} 
  
  void printPreorder(struct node* node,int q){ 
{ 
	static int flag=0,flag1=0,flag2=0;
	static int x=node->data;
	//cout<<"x="<<x<<endl;
	if(x>q)flag1=1;
	else flag2=1;
    if (node==NULL) 
			return; 
  if(x<q)flag1=0;
  if(x>q) flag2=0;
  
  //cout<<"x"<<endl;
    /* first print data of node */
    if(flag1==1){
		if(node->data==q || flag==1){
			if(node->data<=x)
				cout << node->data << endl; 
			flag=1;
		}
	}else{
		if(node->data==q || flag==1){
			if(node->data>=x)
				cout << node->data << endl; 
			flag=1;
	}
}
    /* then recur on left sutree */
		if(node->left!=NULL)
			printPreorder(node->left,q);
			
		
    /* now recur on right subtree */
		if(node->right!=NULL)
			printPreorder(node->right,q); 
		
	
}  }

 struct node* insert(struct node* root, int data)
    {
        if (root == NULL)    //If the tree is empty, return a new,single node
            return newNode(data);
        else
        {
            //Otherwise, recur down the tree 
            if (data <= root->data)
                root->left  = insert(root->left, data);
            else
                root->right = insert(root->right, data);
            //return the (unchanged) root pointer 
            return root;
        }
    }
int main(){
	int n,x,q;
	cin>>n;
	cin>>x;
	struct node *root=newNode(x);
	for(int i=1; i<n;i++){
		cin>>x;
		insert(root,x);
	}
	
	cin>>q;
	//struct node *z=newNode(q);
	//cout<<root1->data<<endl;
	printPreorder(root,q);
	
	return 0;
}
