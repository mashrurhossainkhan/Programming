#include <bits/stdc++.h>
#include <fstream>
#include<stack>
#include <string>
#include<queue>

using namespace std;

void showq(queue <char> gq)
{
    queue <char> g = gq;
    while (!g.empty())
    {
        cout <<" "<< g.front();
        g.pop();
    }
    cout << '\n';
}

int main (){
    bool flag=0;
    char topCheck;
    int i=0;
    char z;
    string str;
    stack<char>s,p;
    queue<char>q;
    string line,mathExpression,line1,line2;
    ifstream file ("abc.txt");

    //checking parenthesis
    for (int lineno2 = 1; getline (file,line2); lineno2++){
        for(int l=0; l<line2.length(); l++){
            if(p.empty() && (line2[l]==')' ||line2[l]=='}' ||line2[l]==']')){
                cout<<"There is an error on line "<<lineno2<<endl;
                exit(0);
            }
                    //cout<<lineno2<<endl;
            if(line2[l]=='(' ||line2[l]=='{' ||line2[l]=='['){
                    p.push(line2[l]);
            }else if(line2[l]==')' && p.top()=='('){
                    p.pop();
            }else if(line2[l]=='}' && p.top()=='{'){
                    p.pop();
            }else if(line2[l]==']' && p.top()=='['){
                    p.pop();
            }else if(line2[l]==')' && p.top()!='('){
                    cout<<"There is a error on line "<<lineno2<<endl;
                    exit(0);
            }else if(line2[l]=='}' && p.top()!='{'){
                    cout<<"There is a error on line "<<lineno2<<endl;
                    exit(0);
            }else if(line2[l]==']' && p.top()!='['){
                    cout<<"There is a error on line "<<lineno2<<endl;
                    exit(0);
            }
        }
    }
    if(!p.empty()){
        cout<<"There is an error"<<endl;
        exit(0);
    }
    file.close();

    ifstream file1 ("abc.txt");

    for (int lineno = 1; getline (file1,line); lineno++){
        //math expression checking
        for(i=0; i<line.length(); i++){

            if(line[i]=='+' || line[i]=='-'||line[i]=='*'||line[i]=='/'){
                if(isdigit(line[i-1]) || (line[i-1]>='A' && line[i-1]<='Z')||(line[i-1]>='a' && line[i-1]<='z')){
                    }else{
                        cout<<"there is an error on line "<<lineno<<endl;
                    }
                    mathExpression=line;
                    cout << mathExpression<< endl;

                    //shunting yard algorithm
                    for(int j=0; j<mathExpression.length()-1; j++){
                        if(mathExpression[j]!='(' || mathExpression[j]!='{' ||mathExpression[j]!='[')flag=1;
                        if(mathExpression[j]==')' || mathExpression[j]=='}' ||mathExpression[j]==']'){
                            while(!s.empty()){
                                if(mathExpression[j]==')'){
                                    z=s.top();
                                    s.pop();
                                    if(z=='('){
                                        flag=1;
                                        break;
                                    }
                                    q.push(z);
                                    }else if(mathExpression[j]=='}'){
                                        z=s.top();
                                        s.pop();
                                        if(z=='{'){
                                            flag=1;
                                            break;
                                        }
                                        q.push(z);
                                    }else if(mathExpression[j]==']'){
                                        z=s.top();
                                        s.pop();
                                        if(z=='['){
                                            flag=1;
                                            break;
                                        }
                                        q.push(z);
                                    }else{
                                        z=s.top();
                                        s.pop();
                                        q.push(z);
                                    }

                                }if(flag==0){
                                    cout<<"there is an error on line "<<lineno<<endl;
                                    exit(0);
                                }
                                }else if(isdigit(mathExpression[j])){
                                        q.push(mathExpression[j]);
                                        }else{
                                            if(mathExpression[j]=='+'){
                                                if(s.top()=='*' || s.top() =='/'){
                                                    z=s.top();
                                                    s.pop();
                                                    q.push(z);
                                                    s.push(mathExpression[j]);
                                                }else{
                                                    s.push(mathExpression[j]);
                                                }
                                            }else if(mathExpression[j]=='-'){
                                                    if(s.top()=='+' || s.top()=='-' || s.top()=='*' || s.top()=='/'){
                                                        z=s.top();
                                                        s.pop();
                                                        q.push(z);
                                                        s.push(mathExpression[j]);
                                                    }else{
                                                         s.push(mathExpression[j]);
                                                    }
                                                }else if(mathExpression[j]=='*'){
                                                    if(s.top()=='/'){
                                                        z=s.top();
                                                        s.pop();
                                                        q.push(z);
                                                        s.push(mathExpression[j]);
                                                    }else{
                                                        s.push(mathExpression[j]);
                                                    }
                                                }else{
                                                    s.push(mathExpression[j]);
                                                }
                                            }
                                        }
                                       if(flag==0) cout<<"there is an error on line "<<lineno<<endl;

                                    while(!s.empty()){
                                        z=s.top();
                                        q.push(z);
                                        s.pop();
                                    }

                                    cout << "The parser is : ";
                                    showq(q);
                                    cout<<endl;
                            break;
                }
            }

        }
        file1.close();

        //if else check
        string ifCheck="if";
        string elseifCheck="else if";
        string elseCheck="else";
        bool gotIF=0;
        ifstream file3 ("abc.txt");
        string line3;
        string ifExpression;
        stack<char>algebras;
         //checking parenthesis
        for (int lineno3 = 1; getline (file3,line3); lineno3++){
            if (line3.find(ifCheck) != string::npos && line3.find(elseifCheck) == string::npos) {
                gotIF=1;
                ifExpression=line3;

                if(line3.find(ifCheck) != string::npos) {
                    //else..if found after if
                    for(int w=0; w<line3.length(); w++){
                        //cout<<line3[w]<<" ";
                        if(line3[w]=='('){
                            int xz=w+1;
                            //cout<<xz<<endl;.0
                            while(1){
                                if(line3[xz]==')'){
                                    break;
                                }else{
                                    algebras.push(line3[xz]);
                                }
                                xz++;
                                }
                            }
                        }
                        if(algebras.empty()){
                            cout<<"there is an error on line "<<lineno3<<endl;
                            // exit(0);
                        }else{
                            while(!algebras.empty()){
                                algebras.pop();
                            }
                        }
                        }else if(line3.find(elseCheck) != string::npos){
                                //else found after if
                        }
                        //checking elseif for not getting if
                    }else if(line3.find(elseifCheck) != string::npos && gotIF==0){
                        cout<<"There is an error on line "<<lineno3<<endl;
                        exit(0);
                         //checking else for not getting if
                    }else if(line3.find(elseCheck) != string::npos && gotIF==0){
                        cout<<"There is an error on line "<<lineno3<<endl;
                        exit(0);
                         //checking elseif for getting if
                    }else if(line3.find(elseifCheck) != string::npos && gotIF==1){
                        for(int w=0; w<line3.length(); w++){
                            //cout<<line3[w]<<" ";
                            if(line3[w]=='('){
                                int xz=w+1;
                                //cout<<xz<<endl;
                                while(1){
                                    if(line3[xz]==')'){
                                        break;
                                    }else{
                                        algebras.push(line3[xz]);
                                    }
                                    xz++;
                                }
                            }
                        }
                        if(algebras.empty()){
                            cout<<"there is an error on line "<<lineno3<<endl;
                            // exit(0);
                        }else{
                             while(!algebras.empty()){
                                    algebras.pop();
                            }
                        }
                    }
                }

         return 0;
    }

