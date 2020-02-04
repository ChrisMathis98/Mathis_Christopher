/*
 * Author: Christopher Mathis
 * Created on January 21, 2020
 * Purpose: Display largest number 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1,num2,num3,large1,large2;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:\n"<<endl;
    cin>>num1;
    cout<<"Enter Second number:\n"<<endl;
    cin>>num2;
    cout<<"Enter third number:\n"<<endl;
    cin>>num3;
    
    //Map inputs -> outputs
    if (num1>num2){//if this is true, display this variable 
        large1=num1;
    }
    else if (num1<num2){//if the first wasnt true but this is, display this variable
        large1=num2;
    }
    
    if (num1>num2 && num1>num3){//if this is true, display this variable
        large2=num1;
    }
    else if (num2>num1 && num2>num3){//if the first wasnt true, display this variable
        large2=num2;
    }
    else if(num3>num1 && num3>num2){//if both were not true, display this variable
        large2=num3;
    }
    
    //Display the outputs
    cout<<fixed<<setprecision(1);
    cout<<"Largest number from two parameter function:\n";
    cout<<large1<<endl;
    cout<<endl;
    cout<<"Largest number from three parameter function:\n";
    cout<<large2<<endl;
    
    //Exit stage right or left!
    return 0;
}