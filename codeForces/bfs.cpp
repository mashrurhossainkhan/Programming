#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;


void bfs(int s,int vertices,int arr[100][100]){
	int colour[10],prev[100],distance[100],i;
	
	for(i=0; i<vertices; i++){
		colour[i]=0; //0=white, 1=gray. 2=black;
		prev[i]=numeric_limits<int>::max();
		distance[i]=numeric_limits<int>::max();
	}
	
	colour[s]=1;
	distance[s]=0;
	prev[s]=123456789;
	
	queue <int> u;
	u.push(s);
	int x;
	
	while(!u.empty()){
		x=u.front();
		u.pop();
		for(int i=0; i<vertices; i++){
			if(arr[x][i]==1 && colour[i]==0){
				colour[i]=1;
				distance[i]=distance[x]+1;
				prev[i]=x;
				u.push(i);
			}
		}
		colour[x]=2;
	}
	for(int i=0; i<vertices; i++){
		cout<<i<<"Colour="<<colour[i]<<endl<<"distance="<<distance[i]<<endl;
		cout<<"prev="<<prev[i];
	}
}
int main(){
	int array[100][100],input;
	int edges,vertices;
	int source;
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
	
	
	cout<<"source:";
	cin>>source;
	
	bfs(source,vertices,array);
}
