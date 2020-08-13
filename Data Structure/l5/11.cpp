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

void mysort(listNode *&head,listNode *p1,listNode *p2)
{
    if(p2==NULL)
    {
        return;
    }
   listNode *p3 = p1->next;
   while(p3!=NULL)
    {
        if(p1->item>p3->item)
        {
            swap(p1->item,p3->item);
        }
        p3=p3->next;
    }
    mysort(head,p2,p2->next);
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
    int count=0;
    while(1)
    {
        printf("1. Insert new item. 2. sort. 3. Print. \n");
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
            mysort(head,head, head->next);

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


