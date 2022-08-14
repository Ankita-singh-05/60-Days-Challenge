//Factors of a numbers

#include<iostream>
using namespace std;

void factorsOfNumbers(int num){

    cout<<"Factors of "<<num<<" are: "<<endl;

    for(int i=1; i<num; i++){
        if(num%i == 0){
            cout<<i<<" ";
        }
    }
}

int main(){

    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;

    factorsOfNumbers(num);

    return 0;
}
