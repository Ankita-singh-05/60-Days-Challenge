//Harshad number or not

//Harshad Number - It is the sum of the digit of numbers is divisible by the number itself is called Harshad number

// Ex - 156 is a harshad number
// 1+5+6 = 12
// and 12 is divisible by 156
//Examples - 6804, 2022, 378, 7, 21

#include<iostream>
using namespace std;

int main(){

    int num, r, harshad = 0;
    cout<<"Enter any number: "<<endl;
    cin>>num;

    int temp = num;

    while(num!=0){
         r = num%10;
         harshad = harshad + r;
         num = num/10;
    }

    if(temp%harshad == 0){
        cout<<"It is a HARSHAD NUMBER!!!"<<endl;
    }
    else{
        cout<<"It is Not a HARSHAD NUMBER!!!"<<endl;
    }

    return 0;
}
