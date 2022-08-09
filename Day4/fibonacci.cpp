//Fibonacci series up to n

#include<iostream>
using namespace std;

int main(){

    int num, fibo1=0, fibo2=1, nextTerm;
    cout<<"Enter any number:"<<endl;
    cin>>num;

    cout<<"Fibonacci of the number is:"<<endl;
    for(int i=2; i<=num; i++){
        nextTerm = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = nextTerm;

        cout<<nextTerm<<" ";
    }





    return 0;
}
