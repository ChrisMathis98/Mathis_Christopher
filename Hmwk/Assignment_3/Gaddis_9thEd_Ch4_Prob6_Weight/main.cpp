/* 
 * Author: Christopher Mathis
 * Created on January 20, 2020
 * Purpose: Calculates an objects weight due to gravity 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float mass,weight;//input of mass and the calculated variable of weight
    //Initialize Variables
    cout<<fixed<<setprecision(1)<<showpoint;//setting it to one decimal place
    cout<<"Enter the mass of an object:\n";
    cin>>mass;//input the mass
    weight=mass*9.8;
    //Process or map Inputs to Outputs
    if(weight<10){//if it weighs less than 10 N display this message 
        cout<<"The object is too light";
    }
    if(weight>1000){//if it weighs more than 1000 N display this message
        cout<<"The object is too heavy";
    }
    else{//if it isnt <10 or >1000 display the weight
        cout<<"The object weighs "<<weight<<" newtons";
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}