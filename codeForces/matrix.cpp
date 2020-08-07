//directed
#include <iostream>
#include <cstdio>
using namespace std;


void bfs(s){
	int colour[10],prev[100],distance[100];
	cout<<vertices;
	
}

int main(){
	
	int array[100][100],input;
	int edges,vertices;
	cout<<"enter the number of edges and vertices"<<endl;
	cin>>edges>>vertices;
	
	for(int i=0; i<vertices; i++){
		for(int j=0; j<vertices; j++){
			cout<<"if "<<i<<" and "<<j<<" are connected press 1 else 0: ";
			cin>>input;
			if(input==1){
				array[i][j]=1;
			}else if(input==0){
				array[i][j]=0;
			}else{
				cout<<"invalid input\n";
				j--;
			}
		}
	}
	
	for(int i=0; i<vertices; i++){
		for(int j=0; j<vertices; j++){
			cout<<array[i][j];
		}
		cout<<endl;
	}
}
