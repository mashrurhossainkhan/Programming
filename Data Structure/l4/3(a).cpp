#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define SIZE 50
int flag=1;
using namespace std;

struct Node{
    int data;
    Node *next;
};

class Stack
{
    private:
        Node *top;
        Node *top1;
        Node *top2;
    public:
        Stack();    //defualt constructor
        void push(char);
        void push1(char);
        void push2(char);
        void pop();
        void pop1();
        void pop2();
        int isEmpty();
        int isEmpty1();
        int isEmpty2();
};

 Stack *s = new Stack();

Stack::Stack(){
    top = NULL;
    top1 = NULL;
    top2 = NULL;
}

int Stack::isEmpty(){
    if(top==NULL)
        return 1;
    else
        return 0;
}

int Stack::isEmpty1(){
    if(top1==NULL)
        flag=1;
    else
        flag=0;
}

int Stack::isEmpty2(){
    if(top2==NULL)
        flag=1;
    else
        flag=0;
}


  char v;

void Stack::pop(){
    if(isEmpty()){
         flag=0;
        exit(1);
    }
    int v;

        v = top->data;
        //cout<<v<< " ";
        Node *oldTop= top;
        top = oldTop->next;
        delete oldTop;

    cout<<endl;
}

void Stack::pop1(){
    if(isEmpty1()){
         flag=0;
        exit(1);
    }
    int v;

        v = top1->data;
        //cout<<v<< " ";
        Node *oldTop= top1;
        top = oldTop->next;
        delete oldTop;

    cout<<endl;
}

void Stack::pop2(){
    if(isEmpty2()){
         flag=0;
        exit(1);
    }
    int v;

        v = top2->data;
        //cout<<v<< " ";
        Node *oldTop= top2;
        top2 = oldTop->next;
        delete oldTop;

    cout<<endl;
}



void Stack::push(char value){
    Node *temp =  new Node;
    temp->data = value;
    temp->next=top;
    top=temp;
    // cout<<"top"<<top->data<<" ";
}

void Stack::push1(char value){
    Node *temp =  new Node;
    temp->data = value;
    temp->next=top1;
    top1=temp;
    // cout<<"top"<<top->data<<" ";
}


void Stack::push2(char value){
    Node *temp =  new Node;
    temp->data = value;
    temp->next=top2;
    top2=temp;
    // cout<<"top"<<top->data<<" ";
}




int main(){
    Stack();
    int i, j, n,x=0, sum=0;
    char arr[100];

    cin>>arr;

    n=strlen(arr);

    for(j=0; j<n; j++){
        if(arr[j]=='(' || arr[j]=='{' || arr[j]=='[')
            s->push(arr[j]);
        else if(arr[j]=='{')
            s->push1(arr[j]);
         else if(arr[j]=='[')
            s->push2(arr[j]);

        else if(arr[j]==')')
            s->pop();
        else if(arr[j]=='}')
            s->pop1();
        else if(arr[j]==']')
            s->pop2();
        }
        s->isEmpty();
        s->isEmpty1();
        s->isEmpty2();


    if(flag==0) cout<<"invalid"<<endl;
    else cout<<"valid"<<endl;


    return 0;
}

