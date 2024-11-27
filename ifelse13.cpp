
#include <iostream>
using namespace std;

   int main(){
       int unit=200;
       int bill;

    if(unit>0 && unit<100){
        cout<<"bill :"<<5*unit;
    }
    else if(unit>100 && unit<200){

        cout<<100*5+(unit-100)*7;
    }
     else if(unit>200){

        cout<<100*5+200*7+(unit-200)*10;
    }
    else{

        cout<<"Total unit :"<<100*50+200*7+(unit-200)*10;
    }

   }

