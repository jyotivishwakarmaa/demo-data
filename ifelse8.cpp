
#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a number: ";
    cin>>num;

     if(num==1){
            float side;
            float area;
            cout<<"Enter length for area of square  ";
            cin>>side;
            area=side*side;
            cout<<area;
     }
    else if(num==2){
        float radius;
        float triarea;
         cout<<"enter  for area of triangle  ";//base*height/2
            cin>>radius;
            triarea=(2*3.14)*radius;
            cout<<triarea;
     }
      else if(num==3){
        float length;
        float width;
        float area;
         cout<<"enter length ";
            cin>>length;
             cout<<"enter width ";
             cin>>width;

            area= length*width;
            cout<<area;
     }
       else if(num==4){
        float radius;
        float area;
         cout<<"enter radius ";
            cin>>radius;

            area= 3.14*(radius*radius);
            cout<<area;
     }
      else{
        cout<<"invalid input";
      }




}
