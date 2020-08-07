#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define QUEUE_MAX_SIZE 5
#define SUCCESS_VALUE 99999
#define NULL_VALUE -99999
using namespace std;

struct Node{
    int data;
    Node *next;
};

class Stack
{
    private:
        Node *top;
    public:
        Stack();    //defualt constructor
        void push(int);
        void pop();
        int isEmpty();
};

Stack::Stack(){
    top = NULL;
}

int Stack::isEmpty(){
    if(top==NULL)
        return 1;
    else
        return 0;
}

void Stack::pop(){
    if(isEmpty()){
        cout<<"No data in the stack"<<endl;
        exit(1);
    }
    int v;
    cout<<"After queue: ";
    while(!isEmpty()){
        v = top->data;
        cout<<v<< " ";
        Node *oldTop= top;
        top = oldTop->next;
        delete oldTop;
    }
    cout<<endl;
}

void Stack::push(int value){
    Node *temp =  new Node;
    temp->data = value;
    temp->next=top;
    top=temp;
}
int front=0;
int rear=0;
int data[100];
int length = 0;

int enqueue(int item){
    if(length == QUEUE_MAX_SIZE) return NULL_VALUE;
        data[front]= item;
        front++;
        length++;
        return SUCCESS_VALUE;

}

int dequeue(){
     Stack();
    Stack *s = new Stack();

    while(1){
        int item = data[rear];
         s->push(item);
        rear++;
        length--;
        if(length==0){
        s->pop();
       return NULL_VALUE;
    }
    }

}

int main(){
    int arr[100], i, j, n,x=0, sum=0;


    for(j=0; j<QUEUE_MAX_SIZE; j++){
        cin>>x;
        enqueue(x);
    }
    dequeue();
    return 0;
}

