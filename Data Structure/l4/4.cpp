#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define SUCCESS_VALUE 9999
#define FAILUE_VALUE -9999
using namespace std;

typedef struct stackNode{
    char data;
    struct stackNode* next;
}node;

class Stack{

};
bool isChar(char c){
    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')){
        return true;
    }
    return false;
}
int priority(char c)
{
    if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    return -1;
}
void infixToPostFix(string str){
    Stack s;
    string output="";
    int i;
    for(i=0;i<str.length();i++){
        if(isChar(str[i])){
            output+=str[i];
        }

        else if(str[i] == '('){
            s.push('(');
        }

        else if(str[i] == ')')
        {
            while(s.isEmpty()!=true && s.top() != '(')
            {
                char c = s.top();
                s.pop();
                output+= c;
            }
            if(s.top() == '(')
            {
                char c = s.top();
                s.pop();
            }
        }
        else{
            while(s.isEmpty()!=true && priority(str[i]) <= priority(s.top()))
            {
                char c = s.top();
                s.pop();
                output+= c;
            }
            s.push(str[i]);
        }

    }
    while(s.isEmpty()!=true)
    {
        char c = s.top();
        s.pop();
        output+= c;
    }
    cout<<output;
}

int main(){
    string s;
    cin>>s;
    infixToPostFix(s);
}
