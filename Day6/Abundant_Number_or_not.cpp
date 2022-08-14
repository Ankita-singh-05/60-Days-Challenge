//Abundant number or not

// ABUNDANT NUMBER or excessive number is a number for which the sum of its proper divisors is greater than the number

#include<iostream>
using namespace std;

int abundantNumber(int num){

    int temp = num;
    int abundant = 0;

    for(int i =1; i<num; i++){
        if(num%i == 0){
            abundant = abundant + i;
        }
    }
    cout<<"Addition of numbers which are the proper divisors of the number is: "<<abundant<<endl;

    if(abundant > temp){
        cout<<"It is an Abundant Number!!!!"<<endl;
    }
    else{
        cout<<"It is Not an Abundant Number!!!!"<<endl;
    }
}

int main(){

    int num;
    cout<<"Enter any number: "<<endl;
    cin>>num;

    abundantNumber(num);

    return 0;
}


