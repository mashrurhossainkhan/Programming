#include <iostream>
#include <vector>
#include <sstream>
#include<cmath>
using namespace std;

bool center (int a, int middle){
    //cout<<a<<" "<<middle<<endl;
    if(a<=middle) return 0;
    else return 1;
}

int main(){
  vector<int>v;
  string buffer;
  int data;
  getline(cin, buffer);
  istringstream iss(buffer);
  //cout<<"iss: "<<iss<<endl;
  while (iss>>data)
  {
      v.push_back(data);
  }

if(v.size()==1){
    cout<<"1"<<endl;
    return 0;
}
  if(v.size() % 2 == 0){
    cout<<"0"<<endl;
    return 0;
  }else{
        int middle = ceil(v.size() / 2);
        bool i = 0;
        int j = 0;
        
        for(vector<int>::iterator itr=v.begin(); itr!=v.end(); ++itr){
            if(j==middle) {
                //cout<<"j ="<<j<<" "<<middle<<endl; 
                ++itr;
            }
            j++;
            i = center(*itr, v[middle]);
            //cout<<i<<endl;
            if(i == 0) break;
        }

        cout<<i<<endl;
  }

  return 0;
}