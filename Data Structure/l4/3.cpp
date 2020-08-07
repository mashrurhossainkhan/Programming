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
    public:
        Stack();    //defualt constructor
        void push(char);
        void pop();
        int isEmpty();
        int isEmpty1();
};

 Stack *s = new Stack();

Stack::Stack(){
    top = NULL;

}

int Stack::isEmpty(){
    if(top==NULL)
        return 1;
    else
        return 0;
}

int Stack::isEmpty1(){
    if(top==NULL)
        cout<<"valid"<<endl;
    else
        cout<<"Not valid"<<endl;
}


  char v;

void Stack::pop(){
    if(isEmpty()){
        cout<<"invalid"<<endl;
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


void Stack::push(char value){
    Node *temp =  new Node;
    temp->data = value;
    temp->next=top;
    top=temp;
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
        else if(arr[j]==')' || arr[j]=='}' || arr[j]==']'){
            s->pop();
        }
    }

    s->isEmpty1();


    return 0;
}
