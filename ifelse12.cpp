
#include <iostream>
using namespace std;

   int main(){

    int mrp;
    int discount;
    int sp;
    cout<<"Enter mrp : ";
    cin>>mrp;

    if(mrp>=10000 && mrp<=20000){
        sp = mrp-discount;
        cout<<"discount :"<<mrp * 10/100<<endl<<sp;
    }
    else if(mrp>=30000 && mrp<=40000){
             sp = mrp-discount;
        cout<<"discount :"<<mrp * 20/100;

    }
    else if(mrp>=500000 && mrp<=60000){
        sp = mrp-discount;
        cout<<"discount :"<<mrp * 30/100;


    }


   }
