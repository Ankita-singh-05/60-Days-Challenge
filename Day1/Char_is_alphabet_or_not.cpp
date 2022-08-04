//A character is an alphabet or not

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){

    string ch;
    cout<<"Enter the Character:"<<endl;
    getline(cin, ch);


    if((ch >= "A" && ch <= "Z" ) || (ch >= "a" && ch <= "z")){
        cout<<"Character is an alphabet!!"<<endl;
    }
    else{
        cout<<"It is not an alphabet!!"<<endl;
    }

    return 0;
}
