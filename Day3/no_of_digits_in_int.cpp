//Number of digits in an integer

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number:"<<endl;
    cin>>num;
    int digit = 0;


    while(num!=0){
             num = num/10;
             digit++;
    }


    cout<<"Number of digits in an integer is: "<<digit<<endl;

    return 0;
}
