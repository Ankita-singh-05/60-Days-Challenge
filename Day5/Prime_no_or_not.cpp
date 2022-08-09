//Prime number or not
//Strong number or not
//Perfect number or not

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num;
    bool isprime = true;
    cout<<"Enter any number:"<<endl;
    cin>>num;


    if(num<=2){
        isprime = false;
    }
    else{
        for(int i=2; i<sqrt(num); i++){
        if(num%i==0){
            isprime = false;
            break;
        }
    }
    }

    if(isprime){
        cout<<"Number is Prime!!"<<endl;
    }
    else{
        cout<<"Number is Not Prime!!"<<endl;
    }


    return 0;
}

//Time complexity - O(root n)
//Space complexity - O(1)
