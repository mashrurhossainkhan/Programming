#include <iostream>
#include <vector>
#include <sstream>
#include<cmath>
using namespace std;

int main(){
  vector<int>v;
  string buffer;
  int data;
  getline(cin, buffer);
  istringstream iss(buffer);
  int x = 0;
  int y = 0, i=1;
  
  while (iss>>data)
  {
      v.push_back(data);
  }

   for(vector<int>::iterator itr=v.begin(); itr!=v.end(); ++itr){
            if(i % 2 == 0){
                y += *itr;
                //++itr;
            }else if(i%2!=0){
                x += *itr;
                //++itr;   
            }
            i++; 
    }
    
    int sum = x - y;

    cout<<sum<<endl;

    return 0;



  return 0;
}