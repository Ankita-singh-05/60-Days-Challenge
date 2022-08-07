//Greatest of three numbers

#include<iostream>
using namespace std;

int main(){

    int x, y, z;
    cout<<"Enter three numbers: "<<endl;
    cin>>x>>y>>z;

    if(x>y && x>z){
        cout<<x<<" is the greatest number!!!!"<<endl;
    }
    else if(y>x && y>z){
        cout<<y<<" is the greatest number!!!!"<<endl;
    }
    else{
        cout<<z<<" is the greatest number!!!!"<<endl;
    }

    return 0;
}
