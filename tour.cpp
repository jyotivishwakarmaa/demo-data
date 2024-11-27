
#include <iostream>
using namespace std;

   int main(){
   int choice;

   cout<<"Enter your choice 1 for INTERNATIONAL visit & 2 for DOMESTIC visit ";
   cin>>choice;

   if(choice==1){
    cout<<"International"<<endl;

    cout<<"enter choice 1 for US & 2 for UK :";
    cin>>choice;

    if(choice==1){
            cin>>choice;
            cout<<"The price of US visit is : 15000" ;
       }
       else if(choice==2){
            cout<<"The price of UK visit is : 20000";
        }
        else{
            cout<<"ii";
        }
    }


       else if(choice==2){
        cout<<"Domestic"<<endl;

         cout<<"enter choice 1 for INDIA & 2 for PAK :";
         cin>>choice;

        if(choice==1){
            cout<<"The price of INDIA visit is : 10000";
        }
        else if(choice==2){
            cout<<"The price of PAK visit is : 12000";
        }
         else{
            cout<<"ii";
      }

        }
   }
