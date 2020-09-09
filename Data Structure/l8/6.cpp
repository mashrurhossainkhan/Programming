#include <iostream>
#include <queue>

using namespace std;

void showpq(priority_queue <int> gq)
{
    priority_queue <int> g = gq;
    while (!g.empty())
    {
        cout <<" "<< g.top();
        g.pop();
    }
    cout << '\n';
}

int main ()
{
    int index, value;
    priority_queue <int> gquiz,s2;
    gquiz.push(3);
    gquiz.push(5);
    gquiz.push(9);
    gquiz.push(6);
    gquiz.push(8);
    gquiz.push(20);
    gquiz.push(10);
    gquiz.push(12);
    gquiz.push(18);

    cout << "s: "<<endl;
    showpq(gquiz);
    cout<<gquiz.top()<<endl;
    cout << "Return : " << gquiz.top()<<endl;

    cout << "S: ";
    gquiz.pop();
    showpq(gquiz);



    return 0;
}
