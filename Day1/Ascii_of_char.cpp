//Ascii values of a character

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character: "<<endl;
    cin>>ch;

    //Ord() function to get the ascii values of the character
    cout<<"ASCII Value of the character is:"<<endl;
    cout<<int(ch)<<endl;

    return 0;
}
