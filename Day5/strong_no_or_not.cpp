//Strong number or not

#include<iostream>
using namespace std;

int factorial(int num){

    int fact = 1;

    for(int i=num; i>0; i--){
            fact = fact * i;
    }

    return fact;
}

int detectStrong(int num){

    int r, strong=0;
    int temp = num;
    while(temp!=0){
        r = temp%10;
        strong = strong + factorial(r);
        temp = temp/10;
    }
    return strong;
}

int main(){

    int num;
    cout<<"Enter any number: "<<endl;
    cin>>num;



    if(detectStrong(num)){
        cout<<"Number is strong!!"<<endl;
    }
    else{
        cout<<"It is not a strong number!!"<<endl;
    }

    return 0;

}
