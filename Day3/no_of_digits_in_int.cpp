//Number of digits in an integer

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number:"<<endl;
     cin>>num;
    int arr[num];
    int count = 0;



    for(int i=0; i<=sizeof(arr); i++){
        count++;
    }
    cout<<"Number of digits in an integer "<<num<<" is "<<count<<endl;

    return 0;
}
