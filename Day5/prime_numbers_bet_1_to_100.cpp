#include<iostream>
using namespace std;
int main()
 {
   cout<<"Prime numbers between 1 to 100 are:\n";
      for int  i=2;i<=100;i++)
   {
       int ctr=0;
       for(int j=2; j<=sqrt(i);++j)
        {
            if(i%j==0)
                ctr=1;
        }
         if(ctr==0)
            cout<<i<<"";
   }
   return 0;
    }
