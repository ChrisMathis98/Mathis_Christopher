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
    float rad,lngth,hght,base,area;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Geometry Calculator\n";
    cout<<"1. Calculate the Area of a Circle\n";
    cout<<"2. Calculate the Area of a Rectangle\n";
    cout<<"3. Calculate the Area of a Triangle\n";
    cout<<"4. Quit\n";
    cin>>choice;//the users choice of which area they want solved
    
    if(choice==1){//if they choose 1 do the area of a circle given their values
        cout<<"Enter the radius of the circle:\n";
        cin>>rad;
        if(rad<0){//to make sure they enter a valid value
            cout<<"Invalid entry, Reenter:\n";
            cin>>rad;//reenter a valid value
        }
        if(rad>0){//if the inputs area valid run it 
            area=PI*pow(rad,2);//calculate the area
            cout<<fixed<<setprecision(1)<<"The area of the circle is "<<area;
        }
    }
    else if(choice==2){//if they choose 2 do the area of a rectangle given their values
        cout<<"Enter the length of the rectangle:\n";
        cin>>lngth;
        if(lngth<0){//to make sure they enter valid value
            cout<<"Invalid entry, Reenter:\n";
            cin>>lngth;//reenter a valid value
        }
        cout<<"Enter the height of the rectangle:\n";
        cin>>hght;
        if(hght<0){//tp make sure they enter a valid value
            cout<<"Invalid entry, Reenter:\n";
            cin>>hght;
        }
        if(lngth>0 && hght>0){//if the inputs are valid run it
            area=lngth*hght;
            cout<<fixed<<setprecision(1)<<"The area of the rectangle is "<<area;
        }
    }
    else if(choice==3){//if they choose 3 do the area of a triangle given their values
        cout<<"Enter the base of the triangle:\n";
        cin>>base;
        if(base<0){//to make sure they enter a valid value
            cout<<"Invalid entry, Reenter:\n";
            cin>>base;//reenter a valid value
        }
        cout<<"Enter the height of the triangle:\n";
        cin>>hght;
        if(hght<0){//to make sure they enter a valid value
            cout<<"Invalid entry, Reenter:\n";
            cin>>hght;
        }
        if(base>0 && hght>0){//if the inputs are valid run it
            area=base*hght*0.5;
            cout<<fixed<<setprecision(1)<<"The area of the triangle is "<<area;
        }
    }
    else if(choice==4){//if they choose 4 quit the program
        return 0;
    }
    else{//if they choose something other than 1-4, have them reenter the values
        cout<<"Invalid entry, Reenter:"<<endl;
        cin>>choice;
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}