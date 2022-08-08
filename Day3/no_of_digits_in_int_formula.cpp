//Number of digits in an integer using formula

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number:"<<endl;
    cin>>num;

    //using formula
    int digit = floor(log10(num)) + 1 ;



    cout<<"Number of digits in an integer is: "<<digit<<endl;

    return 0;
}
