

#include <iostream>
using namespace std;

   int main(){
   int num;

   cout<<"Enter a number 1 for 3 variables & 2 for 2 variables :";
   cin>>num;

   if(num==1){

    int a=10;
    int b= 20;
    int temp;

    temp=a;
    a=b;
    b=temp;

    cout<<a<<b;
   }
         else if(num==2){

    int a=10;
    int b= 20;

    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
   }
   else{
    cout<<"ii";
   }
   }
