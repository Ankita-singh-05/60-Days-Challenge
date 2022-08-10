//Palindrome or not

//PALINDROME NUMBER - Number which remains same after reversing the number

#include<iostream>
using namespace std;

int main(){

    int num, reverse_no = 0, r;
    cout<<"Enter any number: "<<endl;
    cin>>num;

    int temp = num;

    while(temp != 0){
        r = temp % 10;
        reverse_no = reverse_no*10 + r;
        temp = temp/10;
    }



    if(reverse_no == num){
        cout<<"Number is Palindrome!!!"<<endl;
    }
    else{
        cout<<"Not Palindrome!!!"<<endl;
    }

    return 0;
}
