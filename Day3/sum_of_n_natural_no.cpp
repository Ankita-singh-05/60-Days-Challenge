//Sum of N natural numbers

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter any number:"<<endl;
    cin>>num;
    int sum = 0;

    for(int i=1; i<=num; i++){
        sum = sum + i;
    }
    cout<<"The sum of first "<<num<<" numbers is: "<<sum<<endl;

    return 0;
}
