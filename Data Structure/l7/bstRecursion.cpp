#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
#define FALSE_VALUE 0
#define TRUE_VALUE 1


using namespace std;

int flag=0,HeightLeft=0, HeightRight=0,flagLeft=0, flagRight=0,check=0;
struct treeNode
{
    int item;
    struct treeNode * left; //points to left child
    struct treeNode * right; //points to right child
};

struct treeNode * root, *temp, *prev;


void initializeTree()
{
    root = 0;
    temp = 0;
    prev=0;
}


struct treeNode * searchItem(struct treeNode * node, int item)
{
    // Solve using recursion
    if (node == 0) return node;

  if (item == node->item) {
    return node;
  } else if (item < node->item) {

    return searchItem(node->left, item);
  } else {
    return searchItem(node->right, item);
  }
};

struct treeNode * searchPrev(struct treeNode * node,int item)
{

       // Solve using recursion
    if (node == 0) return node;

    if (item == node->item) {
            cout<<prev->item<<endl;
            return prev;
    } else if (item < node->item) {
        prev=node;
        return searchPrev(node->left, item);
  } else {
       prev=node;
        return searchPrev(node->right, item);
  }

};

struct treeNode * makeTreeNode(int item)
{
    struct treeNode * node ;
    node = (struct treeNode *)malloc(sizeof(struct treeNode));
    node->item = item;

    node->left = 0;
    node->right = 0;
    if(flag==0){
        root=node;
        flag=1;
    }
    return node;
};


struct treeNode * insertItem(struct treeNode * node, int item)
{
    // Insert item in the tree using recursion
    if (root == 0)
		return makeTreeNode(item);


	// if given key is less than the root node, recur for left subtree
	if (item < node->item){
        if(node->left==0){
                struct treeNode * node1 ;
                node1 = (struct treeNode *)malloc(sizeof(struct treeNode));
                node1->item = item;
                node1->left = 0;
                node1->right = 0;
                node->left=node1;

                //cout<<"checking left"<<root->left->item<<endl;
        }else{

            node->left = insertItem(node->left, item);
        }

    }

	// if given key is more than the root node, recur for right subtree
	else{
        if(node->right==0){
                struct treeNode * node1 ;
                node1 = (struct treeNode *)malloc(sizeof(struct treeNode));
                node1->item = item;
                node1->left = 0;
                node1->right = 0;
                node->right=node1;

               // cout<<"checking right"<<root->right->item<<endl;
		}else{

            node->right = insertItem(node->right, item);
		}


    }

	return node;
}

int x,y;
int calcNodeHeight(struct treeNode * node)
{
    // return height (maximum distance from node to leaf + 1) using recursion
      if (node == 0)
        return 0;

        x=(calcNodeHeight(node->left)+1);
        y=(calcNodeHeight(node->right)+1);

        if(x>y) return x;
        else return y;

}

int xx,yy;
bool u=0;
int calcHeight(struct treeNode * node,int item) //return height of an item in the tree
{
    // return height of an item using calcNodeHeight function

    if(node==0){
           if(xx>yy) return x;
        else return y;
    }
    if(node->item==item){
            u=1;
    }
    if(u==1){
       if(item<node->item)
            xx=(calcHeight(node->left,item)+1);
        else
            yy=(calcHeight(node->right,item)+1);
    }else{

        if(item<node->item)
            calcHeight(node->left,item);
        else
            calcHeight(node->right,item);
    }

}

int getSize(struct treeNode * node)
{
    // return size of the tree with node(argument) as root using recursion
    if (node == 0)
        return 0;
    else{
        return(getSize(node->left) + 1 + getSize(node->right));

    }
}

int calcNodeDepth(struct treeNode * node)
{
    //calculate depth of level of a node using recursion
}

int checkLCA=0,i=0,j=0;
int arr[100],arr1[100],arrmin[100],b=0;
int findLCA(struct treeNode *node,int item1,int item2)
{

    if(node->item==item1 && checkLCA==0){
        checkLCA=1;
        node=root;
        findLCA(node, item1, item2);
          //    cout<<"sadf"<<checkLCA<<endl;
    }

    if(item1<node->item && checkLCA==0){
               //   cout<<"sadf1"<<checkLCA<<endl;
        arr[i]=node->item;
         i++;
        findLCA(node->left, item1, item2);

    }else if(item1>node->item && checkLCA==0){
         arr[i]=node->item;
         i++;
        findLCA(node->right, item1, item2);
    }

    if(item2<node->item && checkLCA==1){
             //     cout<<"sadf3"<<checkLCA<<endl;
         arr1[j]=node->item;
          j++;
        findLCA(node->left, item1, item2);
    }else if(item2>node->item && checkLCA==1){
            //  cout<<"sadf4"<<checkLCA<<endl;
          arr1[j]=node->item;
          j++;
         findLCA(node->right, item1, item2);
    }


    if(node->item==item2 && checkLCA==1){
        checkLCA=3;

       //  cout<<arr[1]<<" "<<arr1[1]<<endl;
        for(int m=0; m<i; m++){
            for(int n=0; n<j; n++){
               // cout<<arr[m]<<" "<<arr1[n]<<endl;
                if(arr[m]==arr1[n]){
                    arrmin[b]=arr[m];
                    b++;
                }
              }

        }

        int xx=arrmin[0];
        for(int ii=0; ii<b; ii++){
            if(arrmin[ii]<xx){
                xx=arrmin[ii];
                //cout<<xx<<endl;
            }
        }
        cout<<"LCA: "<<xx<<endl;
    }

}

int calcDepth(struct treeNode *node,int item)
{
    //Return depth or level of an item using calcNodeDepth function
     if(node->item==item){
        if(xx>yy) return x;
        else return y;
    }

    if(item<node->item)
        xx=(calcDepth(node->left,item)+1);
    else
        yy=(calcDepth(node->right,item)+1);
}


struct treeNode* deleteItem(struct treeNode * root, int item)
{
    //write your code from previous assignment here, you do not need to implement using recursion
    if(root==0)return root;
    else if(item<root->item) root->left = deleteItem(root->left,item);
    else if(item>root->item) root->right = deleteItem(root->right,item);
    else{
        if(root->left==0 && root->right==0){
            delete root;
            root=0;
            return root;
        }else if(root->left==0){
            struct treeNode *temp = root;
            root= root->right;
            delete temp;
        }else if(root->right==NULL){
            struct treeNode *temp = root;
            root= root->left;
            delete temp;
        }else{
            struct treeNode *temp = root;
            root->item= temp->item;
            root->right = deleteItem(root->right, temp->item);
        }
    }
    return root;
}

int getMinItem(struct treeNode * node)
{
    //return the minimum item in the tree using recursion
    if (root == 0) return 0;

    if(node->left!=0) {
        getMinItem(node->left);
  } else {
    return node->item;
  }
}

int getMaxItem(struct treeNode * node)
{
    //return the maximum item in the tree using recursion
    if (root == 0) return 0;

    if(node->right!=0) {
        getMaxItem(node->right);
  } else {
    return node->item;
  }
}
int count111=0,x111=0;
int rangeSearch(struct treeNode * node, int leftBound, int rightBound)
{
    //returns number of items in the range of leftBound and rightBound using recursion

     if (node == 0){
           return count111;
     }
    else{
        if(node->item>=leftBound && node->item<=rightBound) count111++;
         (rangeSearch(node->left,leftBound,rightBound) + 1 + rangeSearch(node->right, leftBound,rightBound));
    }

}

int findInOrderSuccessor(int item)
{
    //return In order successor of the item in the tree (You need not use recursion)
      if(root==0){
        cout<<"No Nodes in the tree"<<endl;
        return 0;
    }

    struct treeNode *temp, *prev;
    temp=root;
       while(temp!=0){
        if(item==temp->item){
            cout<<"In order successor of " <<item<< "is: "<<prev->item<<endl;
            break;
        }
        else if(item>temp->item){
            prev=temp;
            temp=temp->right;
        }
        else{
            prev = temp;
            temp = temp->left;
        }
    }

}

void printInOrder(struct treeNode * node)
{

    if (node == 0)
        return;

    /* first recur on left child */
    printInOrder(node->left);

    /* then print the data of node */
    cout << node->item << " ";

    /* now recur on right child */
     printInOrder(node->right);
}

void printPreOrder( treeNode * node)
{
    //Write your code using recursion to print the tree in pre-order
      if (node == 0)
        return;

    /* first print data of node */
    cout << node->item << " ";

    /* then recur on left sutree */
    printPreOrder(node->left);

    /* now recur on right subtree */
    printPreOrder(node->right);
}

void printPostOrder(struct treeNode * node)
{
    //Write your code using recursion to print the tree in post-order
     if (node == 0)
        return;

    // first recur on left subtree
    printPostOrder(node->left);

    // then recur on right subtree
    printPostOrder(node->right);

    // now deal with the node
    cout << node->item << " ";
}

int main(void)
{
    initializeTree();
    while(1)
    {
        printf("1. Insert item. 2. search Previous. 3. Search item. \n");
        printf("4. Print height of tree. 5. Print height of an item. \n");
        printf(" 6. PrintInOrder. 7. PrintPreOrder 8. PrintPostOrder\n");
        printf(" 9. Print depth of an item. 10.Print size 11.Get Minimum 12.Get Maximum \n");
        printf("13.Delete item 14.RangeSearch 15.findLCA  16.findInorderSuccessor 17.Exit\n");

        int ch;
        scanf("%d",&ch);
        if(ch==1)
        {
            int item;
            scanf("%d", &item);
            insertItem(root, item);
        }
        else if(ch==2)
        {
            int item;
            scanf("%d", &item);
           searchPrev(root, item);

        }
        else if(ch==3)
        {
            int item;
            scanf("%d", &item);
            struct treeNode * res = searchItem(root, item);
            if(res!=0) printf("Found.\n");
            else printf("Not found.\n");
        }
        else if(ch==4)
        {
            int height = calcNodeHeight(root);
            printf("Height of tree = %d\n", height);
        }
        else if(ch==5)
        {
            int item;
            scanf("%d", &item);
            int height = calcHeight(root,item);
            printf("Height of %d = %d\n", item, height-1);
        }
        else if(ch==6)
        {
            int h = calcNodeHeight(root);
            printf("\n--------------------------------\n");
            printInOrder(root);
            printf("--------------------------------\n");
        }
        else if(ch==7)
        {
            int h = calcNodeHeight(root);
            printf("\n--------------------------------\n");
            printPreOrder(root);
            printf("--------------------------------\n");
        }
        else if(ch==8)
        {
            int h = calcNodeHeight(root);
            printf("\n--------------------------------\n");
            printPostOrder(root);
            printf("--------------------------------\n");
        }
        else if(ch==9)
        {
            int item;
            scanf("%d", &item);
            int depth = calcDepth(root,item);
            printf("Depth of %d = %d\n", item, depth);
        }
        else if(ch==10)
        {
            printf("Size of tree is %d\n",getSize(root));
        }
        else if(ch==11)
        {
            printf("%d\n",getMinItem(root));
        }
        else if(ch==12)
        {
            printf("%d\n",getMaxItem(root));
        }
        else if(ch==13)
        {
            int item;
            scanf("%d",&item);
            deleteItem(root, item);

        }
        else if(ch==14)
        {
            int leftBound,rightBound,num;
            scanf("%d %d",&leftBound,&rightBound);
           num = rangeSearch(root,leftBound,rightBound);
           cout<<num<<endl;
        }
        else if(ch==15)
        {
            int item1,item2;
            scanf("%d %d",&item1,&item2);
             findLCA(root,item1,item2);
        }
        else if(ch==16)
        {
            int item;
            scanf("%d",&item);


        }
        else if(ch==17)
        {
            break;
        }
    }

}
