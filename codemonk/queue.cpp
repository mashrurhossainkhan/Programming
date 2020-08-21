//situation of array after n enqueuing and dequeuing

#include <iostream>
#include <queue>
using namespace std;

char frontc(char array[20],int front){
	return array[front];
}

void enqueue(char array[20],int& rear, char character,int ArraySize){
	if(rear==ArraySize){
		cout<<"Over Flow"<<endl;
	}else{
		array[rear]=character;
		rear++;
	}
}

void dequeue(char array[100], int& front,int rear){
	if(rear==front){
		cout<<"underflow"<<endl;
	}else{
		array[front]=0;
		front++;
	}
}

int main(){
	int ArraySize=20,front=0,rear=4,n=3,i;
	char array[10]={'a','b','c','d'};
	char ch;
	for(i=0; i<n; ++i){
		ch= frontc(array,front);
		enqueue(array,rear,ch,ArraySize);
		dequeue(array, front, rear);
		
	}
	
	
	for(int j=front; j<rear; ++j){
		cout<<array[j]<<" ";
	}
	cout<<endl;
	
	return 0;
}
