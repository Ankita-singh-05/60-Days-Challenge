//Uppercase, Lowercase or special character


//Alphabets
//Uppercase( between 65 to 90 )
//Lowercase( between 97 to 122)

//Digits (between 48 to 57)

//Special Characters (all the remaining in between 0 to 127)

#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>   // to transform
using namespace std;

int main(){

    char charcheck;
    cout<<"Enter the character: "<<endl;
    cin>>charcheck;

    if(charcheck >= 65 && charcheck <=90){
        cout<<charcheck<<" is an uppercase alphabet! "<<endl;
    }

    else if(charcheck >= 97 && charcheck <=122){
        cout<<charcheck<<" is an lowercase alphabet! "<<endl;
    }


     else if(charcheck >= 48 && charcheck <= 57){
        cout<<charcheck<<" is Digit! "<<endl;
    }

    else{
        cout<<charcheck<<" is a special character!!"<<endl;
    }

    return 0;
}
