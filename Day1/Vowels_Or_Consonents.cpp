//A character is a vowel or consonant

#include<iostream>
#include<string>
using namespace std;

int main(){

    string ch;
    cout<<"Enter the character:"<<endl;
    getline(cin, ch);

    if(ch == "a" || ch == "e" || ch == "i" || ch == "o" || ch== "u"){
        cout<<"It is Vowel!"<<endl;
    }
    else{
        cout<<"It is Consonant! "<<endl;
    }

    return 0;
}
