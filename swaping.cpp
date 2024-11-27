#include <iostream>
using namespace std;

   int main(){

    int a = 10;
    int b = 20;
    int temp;

        temp = b;       //temp = 12
        b = a;
        a = temp;

        cout<<a<<"  "<<b;

   }


