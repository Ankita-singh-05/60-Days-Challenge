//AUTOMORPHIC number or not

// AUTOMORPHIC NUMBER - 25^2 = 625

//In the above example the integer number and square of the number ends with same digit hence it is automorphic


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
