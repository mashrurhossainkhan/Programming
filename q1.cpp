#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
  vector<int>v;
  string buffer;
  int data;
  getline(cin, buffer);
  istringstream iss(buffer);
  while (iss>>data)
  {
      v.push_back(data);
  }
  

  for(vector<int>::iterator itr=v.begin(); itr!=v.end(); ++itr){
      cout<<*itr<<" ";
  }
}