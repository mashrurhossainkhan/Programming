#include <iostream>
#include <vector>
#include <sstream>
#include <cstdlib>
using namespace std;

char charr1[1000];
int k = 0;
char* f(vector<char> &vect, int start, int end){
    
    for(int i=start; i<= vect.size(); i++){
       
        //cout<<"i = "<<i<<" k = "<<k<<"vect="<<vect[i]<<endl;
        charr1[k] = vect[i];
        //cout<<"i = "<<i<<" k = "<<k<<"vect="<<vect[i]<<"charr1[k]"<<charr1[k]<<endl;
        k++;
    }
    return charr1;
}

int main(){
    vector<char> v;
    int s,e;
    string buffer;
    char data;

    getline(cin, buffer);
    istringstream iss(buffer);
    while (iss>>data)
    {
      v.push_back(data);  
    }
    cin>>s;
    cin>>e;
    if(e < 0 || s <0) {
        cout<<"null"<<endl;
        return 0;
    }
    else if (e==0) return 0;
    else if(s+e > v.size()){
        cout<<"null"<<endl;
        return 0;
    }

    else if (s+e<=v.size()){
        char* ptr = f(v,s,e);
        int sizeof_ptr = e;
        
        for(int j=0; j<sizeof_ptr; j++){
            cout<<ptr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}