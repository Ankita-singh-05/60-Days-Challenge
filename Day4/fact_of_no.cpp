//Factorial of a number

#include<iostream>
using namespace std;

int main(){

    int num, fact=1;
    cout<<"Enter any number:"<<endl;
    cin>>num;

    for(int i=num; i>0; i--){
        fact = fact * i;
    }
    cout<<"Factorial of the number is: "<<fact<<endl;

    return 0;
}
