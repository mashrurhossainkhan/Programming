#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void push(struct node** top, int data);
int pop(struct node** top);

struct queue
{
    struct node *stack1;
    struct node *stack2;
};

void enqueue(struct queue *q, int x)
{
    push(&q->stack1, x);
}

void dequeue(struct queue *q)
{
    int x;
    if (q->stack1 == NULL && q->stack2 == NULL) {
        cout<<"queue is empty";
        return;
    }
    if (q->stack2 == NULL) {
        while (q->stack1 != NULL) {
        x = pop(&q->stack1);
        push(&q->stack2, x);
        }
    }
    x = pop(&q->stack2);
    cout<<x<<endl;
}

void push(struct node** top, int data)
{
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
        if (newnode == NULL) {
            return;
        }
    newnode->data = data;
    newnode->next = (*top);
    (*top) = newnode;
}
int pop(struct node** top)
{
    int buff;
    struct node *t;
    if (*top == NULL) {
        return 0;
    }
    else {
        t = *top;
        buff = t->data;
        *top = t->next;
        free(t);
        return buff;
    }
}

void display(struct node *top1,struct node *top2)
{
    while (top1 != NULL) {
            cout<<top1->data<<endl;
            top1 = top1->next;
    }
    while (top2 != NULL) {
        cout<<top2->data<<endl;
        top2 = top2->next;
    }
}

int main()
{
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    int f = 0, a;
    char ch = 'y';
    q->stack1 = NULL;
    q->stack2 = NULL;
    while (ch == 'y'||ch == 'Y') {
        cout<<"enter ur choice\n1.add to queue\n2.remove from queue\n3.display\n4.exit\n";
        cin>>f;
        switch(f) {
            case 1 :
                cout<<"enter the element to be added to queue\n";
                     cin>>a;
                     enqueue(q, a);
                     break;
            case 2 : dequeue(q);
                     break;
            case 3 : display(q->stack1, q->stack2);
                     break;
            case 4 : exit(1);
                     break;
            default :
                cout<<"invalid\n";
                      break;
        }
    }
}
