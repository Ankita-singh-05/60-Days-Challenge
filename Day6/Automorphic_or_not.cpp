//Automorphic number or not


// AUTOMORPHIC NUMBER - Number
//Harshad number or not
//Abundant number or not
//Power of a number
//Factors of a numbercd
//Add two fractions

#include<iostream>
using namespace std;


int main(){

    int num, r_no, r;
    cout<<"Enter any number: "<<endl;
    cin>>num;

    int temp = num;

    r_no = temp%10;
    int automorphic = num*num;

    r = automorphic%10;

    if(r_no == r){
        cout<<"Automorphic!!"<<endl;
    }
    else{
        cout<<"Not automorphic!!!"<<endl;
    }

    return 0;
}
