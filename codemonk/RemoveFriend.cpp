#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
	int data;
	struct node* next;
}*head,*head1;


//typedef struct LinkedList *node;

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    // Input data of node from the user
    //printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL


    // Create n - 1 nodes and add to list
    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

       // printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL 

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}

void deleteNode(int k){
	while(k){
	struct node *p, *q,*delHead;
	int flag=0;
	p=head;
	q=head;
	while(q->data<q->next->data && k>0 && flag==0){
		p=head;
		q=head;
		q=q->next;
		head=q;
		free(p);
		k--;
		flag=1;
	}
	while(k && flag==0){
	q=head;
	p=q->next;
	
	while(p->data < q->data){
		p=p->next;
		q=q->next;
	}
	delHead=head;
	
	while(delHead->next!=q){
		delHead=delHead->next;
	}
	delHead->next=delHead->next->next;
	free(q);
	k--;
	flag=1;
 }
 
 while(k>0 && flag==0){
	 p=head;
	 
	 while(p->next!=NULL){
		 p=p->next;
	 }
	 free(p);
	 k--;
	 flag=1;
 }
}
}

void Traverse(){
   struct node *p;
	p = head;
	while(p != NULL){
			cout<<p->data<<" ";
			p = p->next;
}
cout<<endl;
}
int main(){
	 //struct LinkedList* head = NULL; 
	int t,n,k,i;
	
	cin>>t;
	
	for(i=0; i<t; i++){
		cin>>n>>k;
		createList(n);
		deleteNode(k);
		Traverse();
		}
		return 0;
	
}
