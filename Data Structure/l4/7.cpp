#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define QUEUE_MAX_SIZE 10
#define SUCCESS_VALUE 99999
#define NULL_VALUE -99999
using namespace std;
int k=0;

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
     while(!isEmpty()){
        v = top->data;
        cout<<v<< " ";
        Node *oldTop= top;
        top = oldTop->next;
        delete oldTop;
    }
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


Stack *s = new Stack();
int dequeue(){
Stack();
    while(1){
        int item = data[rear];
        rear++;
        length--;
    if(length>=k){
         s->push(item);
    }else{
        return NULL_VALUE;
    }
    }
}

void display(){
      s->pop();
    for(int l=k; l<length+k ; l++){
        cout<<data[l]<<" ";
    }
    cout<<endl;
}
int main(){
     Stack();
    int arr[100], i, j, n,x=0, sum=0;

    for(j=0; j<QUEUE_MAX_SIZE; j++){
        cin>>x;
        enqueue(x);
    }
    cin>>k;
    dequeue();
    display();
    return 0;
}


