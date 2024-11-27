#include <iostream>
using namespace std;

   int main(){

   int capacity;

   cout<<"Enter capacity of water tank ";
   cin>>capacity;

   if(capacity>=75 && capacity<=100){

    cout<<"Tank is Full";
   }
   else if(capacity>50 && capacity<75){

    cout<<"Tank is three fourth";
   }
    else if(capacity>25 && capacity<50){

    cout<<"Tank is Half";
    }
     else if(capacity>0 && capacity<25){

    cout<<"Tank is one half";
    }
    else{

      cout<<"ii";
    }
   }




