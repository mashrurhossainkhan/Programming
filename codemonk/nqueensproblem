//15 means empty cell
//10 means there is a queen
//check backtrack
#include <iostream>
using namespace std;
int flag1=0;
void draw(int board[50][50],int n){
	for(int u=0; u<n; u++){
		for(int v=0; v<n; v++){
			if(board[u][v]==10)
				cout<<"♛ ";
			else
				cout<<"❌"<<" ";
				//cout<<"⚸ ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

void blocked(int i,int j,int n,int board[50][50],int count){
	for(int y=0; y<n; y++){//row
		if(board[i][y]>count && board[i][y]!=10 && board[i][y]!=9){
				board[i][y]=count;
				
			}
		if( board[i][y]==15)
			board[i][y]=count;
	}
	for(int z=0; z<n; z++){//column
		if( board[z][j]==15)
			board[z][j]=count;
	}
	int sum=i+j;
	int sub=i-j;
	//diagonal
	for(int dx=0; dx<n; dx++){
		for(int dy=0; dy<n; dy++){
			if(dx+dy==sum){
				if(board[dx][dy]==15)
					board[dx][dy]=count;
				}
				
				
			if(dx-dy==sub){
				if(board[dx][dy]==15)
					board[dx][dy]=count;
				}
		}
		
	}
	
	}
	
	
	
int Closeblocked(int i,int j,int n,int board[50][50],int count){
	
	for(int dx=0; dx<n; dx++){
		for(int dy=0; dy<n; dy++){
			
			if(board[dx][dy]==count){
				flag1=1;
				board[dx][dy]=15;
			}
			if(board[0][0]==15){
				//cout<<"abc"<<endl;
				for(int ii=0; ii<n; ii++){
					for(int jj=0; jj<n; jj++){
						board[ii][jj]=15;
					}
				}
				board[0][0]=9;
				count=1;
			}
			
			
		}
	}
	count-=1;
	
	return count;
}
int QueenPosition(int n,int board[50][50],int count){
	int i,j;
	
	for(i=0; i<n;i++){
		for(j=0; j<n; j++){
			if(board[i][j]==10)break;
			if(board[i][j]==15){
				if(i==count){
				count++;
				board[i][j]=10;//10 means there is a queen
				blocked(i,j,n,board,count);
				draw(board,n);
				break;
			}
			}
		}
	}
	cout<<endl;
	return count;
}

void MakeNineFifteen(int board[50][50],int n,int i,int j){
	for(int ii=i+1;ii<n ; ii++){
		for(int jj=0; jj<n; jj++){
			if(ii==0 && jj==0)continue;
			else if(ii==i && jj==j)continue;
			else if(board[ii][jj]==9)
				board[ii][jj]=15;
		}
	}
}

int main(){
	int n,board[50][50],i,j,count=0,CountOfTotalQueenOnBoard=0,flag=0,x[10],k=0;
	
	cout<<"---------------n queen's problem using backtracking---------------\n";
	cout<<"---------------♛ represents the queen---------------\n";
	cout<<"---------------15 represents the emoty sells ---------------\n";
	
	cout<<"Enter the number of n: ";
	cin>>n;
	
	for(i=0;i<n; i++){
		for(j=0; j<n; j++){
				board[i][j]=15;//every room is empty
		}
	}
	//CountOfTotalQueenOnBoard=QueenPosition(n,board,count);
	//draw(board,n);
	while(1){
		
		if(count==n){
			cout<<"every queen are on board"<<endl;
			break;
		}else{
			count=QueenPosition(n, board, count);
			for(i=n-1; i>=0; i--){
				if(flag==1){
					flag=0;
					break;
				}
				for(j=n-1; j>=0; j--){
					if(board[i][j]==10){
						if(count==n){
							cout<<"every queen are on board"<<endl;
							return 0;
						}
						board[i][j]=9;
						x[k]=count-1;
						count--;
						//cout<<x[k]<<endl;
						if(x[k]!=x[k-1] && k!=0){
							MakeNineFifteen(board,n,i,j);
							k=-1;
						}
						//if(board[0][0]==9 && count==1)MakeNineFifteen(board,n);
						count=Closeblocked( i, j, n, board, count+1);
						draw(board,n);
						flag=1;
						k++;
						break;
					}
				}
				
			}
		}
		
	}
	return 0;
}
