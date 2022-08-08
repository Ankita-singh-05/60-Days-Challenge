//Reverse of a given number

#include<iostream>
using namespace std;

int main(){

    int num, r, reverse_no=0;
    cout<<"Enter any number:"<<endl;
    cin>>num;

    while(num!=0){
        r = num % 10;
        reverse_no = reverse_no*10 + r;
        num = num/10;
    }

    cout<<"Reverse of the number is: "<<reverse_no;

    return 0;
}
