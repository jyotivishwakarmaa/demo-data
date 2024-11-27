#include<iostream>
using namespace std;

int main(){

    int pass = 1122;
    cout<<"Enter ur password : ";
    cin>>pass;

    if(pass==1122){
        cout<<"open";
    }else{
        cout<<"Wrong paas try again : ";
        cin>>pass;

        if(pass==1122){
            cout<<"open";

        }else{
        cout<<"Wrong pass try again : ";
        cin>>pass;

        if(pass==1122){
            cout<<"open";
        }
        else{
            cout<<"Card block";
        }
        }

    }

}
