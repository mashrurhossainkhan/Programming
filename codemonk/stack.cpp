#include <iostream>
using namespace std;
int main(){
	int m,top=-1;
	char str[100],stack[100];
	
	
	cout<<"Enter the character numbers: ";
	cin>>m;
	
	cout<<"Enter the characters: ";
	for(int i=0;i<m; i++){
		cin>>str[i];
	}
	
	for(int j=0; j<m;j++){
		if(str[j]=='('){
			top+=1;
			stack[top]='(';
			//cout<<top<<endl;
		}
		
		if(str[j]==')'){
			if(top==-1){
				top-=1;
				break;
			}else{
				top-=1;
			}
		}
	}
	
	if(top == -1)
            cout << "String is balanced!" << endl;
        else
            cout << "String is unbalanced!"<< endl ;
}
