//Power of a number

#include<iostream>
using namespace std;

int powerOfNumber(int num, int pow){

    int temp = num;

    for(int i=1; i<pow; i++){
        num = num * temp;
    }
    cout<<num;
}

int main(){

    int num, pow;
    cout<<"Enter any number: "<<endl;
    cin>>num;

    cout<<"Enter power you want to calculate: "<<endl;
    cin>>pow;

    powerOfNumber(num, pow);

    return 0;

}
