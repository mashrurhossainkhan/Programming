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
    cout<<endl;
}

void Stack::push(int value){
    Node *temp =  new Node;
    temp->data = value;
    temp->next=top;
    top=temp;
}

int main(){
    Stack();
    int arr[100], i, j, n,x=0, sum=0;
    Stack *s = new Stack();
    cout<<"array size?: ";
    cin>>n;

    for(i=0; i<n; i++){
        cin>>x;
        int temp =x;

        while(temp!=0){
            sum+=temp%10;
            temp/=10;
        }
        arr[i]=sum;
        x=0;
        sum=0;
    }

    for(j=0; j<n; j++){
        s->push(arr[j]);
    }
    s->pop();

    return 0;
}
