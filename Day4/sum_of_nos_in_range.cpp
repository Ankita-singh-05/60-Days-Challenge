//Sum of numbers in a given range

#include<iostream>
using namespace std;

int main(){

    int s, e;
    cout<<"Enter the range of numbers: "<<endl;
    cin>>s>>e;
    int sum = 0;

    for(int i=s; i<=e; i++){
        sum = sum + i;
    }

    cout<<"Sum of the numbers in the given range is: "<<sum;

    return 0;
}
