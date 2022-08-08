//Sum of digits of a number

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number:"<<endl;
    cin>>num;
    int sum = 0;


    while(num!=0){
             sum += num % 10;
             num = num/10;
    }


    cout<<"Sum of digits of numbers is: "<<sum<<endl;

    return 0;
}
