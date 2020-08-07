#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define SIZE 50
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
    public:
        Stack();    //defualt constructor
        void push(char);
        void push1(char);
        void pop();
        void pop1();
        int isEmpty();
        int isEmpty1();
        void checkPalinDrome();
};

 Stack *s = new Stack();
 Stack *s1 = new Stack();

Stack::Stack(){
    top = NULL;
    top1 = NULL;
}

int Stack::isEmpty(){
    if(top==NULL)
        return 1;
    else
        return 0;
}

int Stack::isEmpty1(){
    if(top1==NULL){
        return 1;
    }else
        return 0;
}
/*void Stack::pop(){
    if(isEmpty()){
        cout<<"No data in the stack"<<endl;
        exit(1);
    }

    char v,v1;
    cout<<"top->data="<<top->data<<" ";
    cout<<"top1->data="<<top1->data<<" ";
    while(top->data == top1->data){
            v = top->data;
            v1 = top1->data;
            cout<<"v="<<v<< " ";
             cout<<"v1="<<v1<< " ";
            Node *oldTop= top;
            Node *oldTop1= top1;
            top = oldTop->next;
            top1 = oldTop1->next;
            delete oldTop;
            delete oldTop1;
        }

    isEmpty1();

    cout<<endl;
}*/
  char v;
  char v1;

  void Stack::checkPalinDrome(){
    if(top1==NULL && top==NULL){
        cout<<"Palindrome"<<endl;
        exit(1);
    }else
         cout<<"Not Palindrome"<<endl;
        exit(1);
}

void Stack::pop(){
    if(isEmpty()){
        cout<<"No data in the stack"<<endl;
        exit(1);
    }

    while(!isEmpty()){
        v = top->data;
        s1->pop1();
        Node *oldTop= top;
        top = oldTop->next;
        delete oldTop;
    }
    checkPalinDrome();
}

void Stack::pop1(){

  if(isEmpty1()){
        cout<<"No data in the stack"<<endl;
        exit(1);
    }

    v1 = top1->data;

    if(v==v1){
        v1 = top1->data;
        Node *oldTop1= top1;
        top1 = oldTop1->next;
        delete oldTop1;
        }else{
            cout<<"Not Palindrome"<<endl;
            exit(1);
        }


    cout<<endl;
}

void Stack::push(char value){
    Node *temp =  new Node;
    temp->data = value;
    temp->next=top;
    top=temp;
    // cout<<"top"<<top->data<<" ";
}

void Stack::push1(char value1){
    Node *temp =  new Node;
    temp->data = value1;
    temp->next=top1;
    top1=temp;
    //cout<<"top1"<<top1->data<<" ";
}


int main(){
    Stack();
    int i, j, n,x=0, sum=0;
    char arr[100];

    cin>>arr;

    n=strlen(arr);


    for(j=0; j<n; j++){
        s->push(arr[j]);
    }

     for(i=n-1; i>=0; i--){
        s1->push1(arr[i]);
    }

    s->pop();

    return 0;
}
