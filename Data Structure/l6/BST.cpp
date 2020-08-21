#include<stdio.h>
#include <iostream>
#include<stdlib.h>

#define FALSE_VALUE 0
#define TRUE_VALUE 1

using namespace std;

struct treeNode
{
    int item;
    struct treeNode * left; //points to left child
    struct treeNode * right; //points to right child
};

struct treeNode * root;


void initializeTree()
{
    root = 0;
}

/****** Complete the following functions using Loop ******/
struct treeNode * searchItem(int item)
{
    // return the treeNode holding the item
    if(root==0){
        cout<<"No Nodes in the tree"<<endl;
        return 0;
    }

    struct treeNode *temp, *prev;
    temp=root;
       while(temp!=0){
        if(item==temp->item){
            cout<<"Found"<<endl;
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
};

int insertItem(int item)
{
    //If success return TRUE_VALUE, else return FALSE_VALUE
    if(root==0){
        struct treeNode *newNode = (struct treeNode *) malloc(sizeof(struct treeNode));
        newNode->item = item;
        newNode->left = 0;
        newNode->right = 0;
        root = newNode;
    }

    struct treeNode *temp, *prev;
    temp=root;

    while(temp!=0){
        if(item>temp->item){
            prev=temp;
            temp=temp->right;
        }else{
            prev = temp;
            temp = temp->left;
        }
    }
    struct treeNode *newNode = (struct treeNode*) malloc(sizeof(struct treeNode));
    newNode->item = item;
    newNode->left = 0;
    newNode->right = 0;

    if(item<prev->item){
        prev->left = newNode;
    }else{
        prev->right =  newNode;
    }
    return item;
}

struct treeNode* deleteItem(struct treeNode *root, int item)
{
    //If success return TRUE_VALUE, else return FALSE_VALUE
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


int calcLevel(int item)
{
    //return level/depth of an item in the tree
    int count = 0;
    if(root==0){
        return 0;
    }

    struct treeNode *temp, *prev;
    temp=root;
       while(temp!=0){
        if(item==temp->item){

            break;
        }
        else if(item>temp->item){
            prev=temp;
            temp=temp->right;
            count++;
        }
        else{
            prev = temp;
            temp = temp->left;
            count++;
        }
    }
    return count;
}

int getMinItem() // return the minimum item in the tree
{
     int x = 0;
    if(root==0){
        cout<<"No item in the tree"<<endl;
        return 0;
    }

    struct treeNode *temp, *prev;
    temp=root;
       while(temp!=0){
            prev = temp;
            temp = temp->left;
            x = prev->item;
    }
    return x;

}

int getMaxItem() // return the maximum item in the tree
{
    int x = 0;
    if(root==0){
        cout<<"No item in the tree"<<endl;
        return 0;
    }

    struct treeNode *temp, *prev;
    temp=root;
       while(temp!=0){
            prev = temp;
            temp = temp->right;
            x = prev->item;
    }
    return x;
}

int main(void)
{
    initializeTree();
    while(1)
    {
        printf("1. Insert item. 2. Delete item. 3. Search item. \n");
        printf("4. Print level of an item. \n");
        printf("5.Get Minimum  6.Get Maximum \n");
        printf("7.Exit\n");

        int ch;
        scanf("%d",&ch);
        if(ch==1)
        {
            int item;
            scanf("%d", &item);
            insertItem(item);
        }
        else if(ch==2)
        {
            int item;
            scanf("%d", &item);
            deleteItem(root, item);
        }
        else if(ch==3)
        {
            int item;
            scanf("%d", &item);
            struct treeNode * res = searchItem(item);
            if(res!=0) printf("Found.\n");
            else printf("Not found.\n");
        }
        else if(ch==4)
        {
            int item;
            scanf("%d", &item);
            int level = calcLevel(item);
            printf("Level of %d = %d\n", item, level);
        }
        else if(ch==5)
        {
            printf("%d\n",getMinItem());
        }
        else if(ch==6)
        {
            printf("%d\n",getMaxItem());
        }
        else if(ch==7)
        {
            break;
        }
    }

}

