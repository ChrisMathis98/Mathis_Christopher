/* 
 * Author: Christopher Mathis
 * Created on January 20, 2020
 * Purpose: Create a menu for calculating areas
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float PI=3.14159;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int choice;
    float rad,area,lngth,wdth,hght,base;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Geometry Calculator\n";
    cout<<"1. Calculate the Area of a Circle\n";
    cout<<"2. Calculate the Area of a Rectangle\n";
    cout<<"3. Calculate the Area of a Triangle\n";
    cout<<"4. Quit\n";
    cin>>choice;
    
    if(choice==1){
        cout<<"Enter the radius of the circle:\n";
        cin>>rad;
        if(rad>0){
            area=PI*pow(rad,2);
            cout<<"The area of the circle is "<<area;
        }
        else cout<<"Invalid entry, Reenter:\n";
    }
    else if(choice==2){
        cout<<"Enter the length of the rectangle:\n";
        cin>>lngth;
        cout<<"Enter the height of the rectangle:\n";
        cin>>hght;
        if(lngth>0 && hght>0){
            area=lngth*hght;
            cout<<"The area of the rectangle is "<<area;
        }
        else cout<<"Invalid entry, Reenter:\n";
    }
    else if(choice==3){
        cout<<"Enter the base of the triangle:\n";
        cin>>base;
        cout<<"Enter the height of the triangle\n";
        cin>>hght;
        if(base>0 && hght>0){
            area=base*hght*0.5;
            cout<<"The area of the triangle is "<<area;
        }
        else cout<<"Invalid entry, Reenter:\n";
    }
    else if(choice==4){
        return 0;
    }
    else cout<<"Invalid entry, Reenter:"<<endl;
    
    //Display Outputs

    //Exit stage right!
    return 0;
}