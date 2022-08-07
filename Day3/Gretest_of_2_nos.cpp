//Greatest of two numbers

#include<iostream>
using namespace std;

int main(){

    int a, b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;

    if(a>b){
        cout<<a<<" is the greatest number!!"<<endl;
    }
    else{
        cout<<b<<" is the greatest number!!"<<endl;
    }

    return 0;
}
