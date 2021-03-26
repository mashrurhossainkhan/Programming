#include <bits/stdc++.h>
using namespace std;

class rectangle{
     int height;
    int width;
public:
    int area();
    rectangle();
   ~rectangle();
    set(int h, int w);
};

int rectangle::area(){
    return height * width;
}

rectangle::rectangle(){
    height = 3;
    width = 2;
}

rectangle::~rectangle(){

}

rectangle::set (int h, int w){
    height = h;
    width = w;
}

int main(){
    rectangle obj;


    cout<<"area: "<<obj.area()<<endl;
    return 0;
}



