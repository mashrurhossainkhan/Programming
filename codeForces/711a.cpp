#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char a[1004];
    bool flag = false;
    vector<string>vec;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
       cin>>a;

       if(flag == false){
        if(a[0]=='O' && a[1]=='O'){
                a[0] = '+';
                a[1] = '+';
                flag = true;
        }
        else if(a[3]=='O' && a[4]=='O'){
            a[3] = '+';
            a[4] = '+';
            flag = true;
       }
       }
       //cout << a[0] << endl;
       vec.push_back(a);
       //cout << a << endl;

    }

    if(flag == true){
        cout << "YES\n";
        for(int i=0; i<vec.size(); i++){
            cout << vec[i] << endl;
        }
    }
    else    cout << "NO\n";
}
