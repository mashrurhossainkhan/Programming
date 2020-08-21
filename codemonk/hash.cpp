#include <iostream>
using namespace std;

int hashFunction(char c){
	return (c-'a');
}

int main(){
	string s="ababbc";
	int Frequency[100]={0};
	
	for(int i=0; i<s.length(); i++){
		int index=hashFunction(s[i]);
		Frequency[index]++;
	}
	
	for(int j=0; j<26; j++){
		cout<<(char)(j+'a')<<" "<<Frequency[j]<<endl;
	}
}
