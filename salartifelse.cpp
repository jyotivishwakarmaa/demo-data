

#include <iostream>
using namespace std;

   int main(){
   int salary;


   cout<<"Enter salary ";
   cin>>salary;

   if(salary>100000 && salary<500000){
        int tax = (10*salary)/100;
        int grosssalary = salary-tax;

    cout<<"In hand salary :"<<grosssalary;
   }
     else if(salary>600000 && salary<1000000){
        int tax = (20*salary)/100;
        int grosssalary = salary-tax;

    cout<<"In hand salary :"<<grosssalary;
   }
    else if(salary>1100000 && salary<1500000){
        int tax = (30*salary)/100;
        int grosssalary = salary-tax;

    cout<<"In hand salary :"<<grosssalary;
   }


   }
