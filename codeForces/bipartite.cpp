#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
	
	int array[100][100],input;
	int edges,vertices;
	vector<int>group1;
	vector<int> group2;
	vector<int>::iterator it1,it2,it3,it4;
	
	cout<<"enter the number of edges and vertices"<<endl;
	cin>>edges>>vertices;
	
	for(int i=1; i<=vertices; i++){
		for(int j=1; j<=vertices; j++){
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
	

	
	for(int i=1; i<=vertices; i++){
		for(int j=1; j<=vertices; j++){
			if(array[i][j]==1){
				it1 = find (group1.begin(), group1.end(),i);
				it2 = find (group2.begin(), group2.end(),i);
				it3 = find (group1.begin(), group1.end(),j);
				it4 = find (group2.begin(),group2.end(),j);
				
				if(it1==group1.end() && it2==group2.end()){
						group1.push_back(i);
						//cout<<"group1="<<i<<endl;
					if(it3==group1.end() && it4==group2.end()){
						group2.push_back(j); 
						//cout<<"group2="<<j<<endl;
					}
				}else if(it3==group1.end() && it4==group2.end()){
					group2.push_back(j);
					//cout<<"group2="<<j<<endl;
				}else if(it1==group1.end() && it4==group1.end()){
					
				}else if(it2==group2.end() && it3==group1.end()){
				
				}else{
					cout<<"not bipartite"<<endl;
					return 0;
				}
			}
		}
	}
	
	cout<<"bipartite"<<endl;
	
	return 0;
}
