#include<stdio.h>
#include<stdlib.h>
#include <iostream>

#define NULL_VALUE -99999
#define SUCCESS_VALUE 99999



using namespace std;

struct listNode
{
    int item;
    struct listNode * next;
};

struct listNode * head;
struct listNode *temp, *prev ;


void initializeList()
{
    head = 0;//initially set to NULL

}

int insertItem(int item) //insert at the beginning
{
	struct listNode * newNode ;
	newNode = (struct listNode*) malloc (sizeof(struct listNode)) ;
	newNode->item = item ;
	newNode->next = head; //point to previous first node
	head = newNode ; //set list to point to newnode as this is now the first node
    temp = head ;
	return SUCCESS_VALUE ;
}

int deleteItem(int index)
{


	if(temp==0){
        cout<<"Not found"<<endl;
        return 0;
	}
    if(index>0){
        index--;
       prev = temp;
		temp = temp->next ; //move
		 deleteItem(index);
    }

	if (temp == 0) return NULL_VALUE ; //item not found to delete
	if (temp == head) //delete the first node
	{
		head= head->next ;
		free(temp) ;
	}
	else
	{
		prev->next = temp->next ;
		free(temp);
	}
	return SUCCESS_VALUE ;
}




void printList()
{
    struct listNode * temp;
    temp = head;
    while(temp!=0)
    {
        printf("%d->", temp->item);
        temp = temp->next;
    }
    printf("\n");
}

int main(void)
{
    initializeList();
    while(1)
    {
        printf("1. Insert new item. 2. Delete item of an index. 3. Print. \n");
        printf("4. exit.");

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
            int index;
            scanf("%d", &index);
            deleteItem(index-1);
        }
        else if(ch==3)
        {
             printList();
        }
        else if(ch==4){
            break;
        }

    }

}

