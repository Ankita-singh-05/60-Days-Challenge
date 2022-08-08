//Fibonacci series up to n

#include<iostream>
using namespace std;

int main(){

    int num, fibo=0;
    cout<<"Enter any number:"<<endl;
    cin>>num;

    for(int i=1; i<=num; i++){
        fibo = fibo + i;
    }

    cout<<"Fibonacci of the number is:"<<fibo<<endl;

    return 0;
}
