//Armstrong number or not

//Armstrong number is a number that is equal to the sum of cubes of its digits

// Example - 153

#include<iostream>
using namespace std;

int main(){

    int num, sum=0, r;
    cout<<"Enter any number: "<<endl;
    cin>>num;

    int temp = num;

    while(temp!=0){
        r = temp%10;
        sum = sum + (r*r*r);
        temp = temp/10;
    }

    if(sum == num){
        cout<<"It is ARMSTRONG Number!!"<<endl;
    }
    else{
        cout<<"It is not an ARMSTRONG Number!!"<<endl;
    }


    return 0;
}
