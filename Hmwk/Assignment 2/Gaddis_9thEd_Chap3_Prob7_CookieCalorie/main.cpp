/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 14, 2020, 11:00 AM
 * Purpose:  Calculate cookie calories
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int nCookie,nCal;//number of cookies and number of calories
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Calorie Counter\n";
    cout<<"How many cookies did you eat?\n";
    cin>>nCookie;//how many cookeis were eaten
    
    nCal=nCookie*(300/4);//the number of calories given how many cookies are eaten
    
    //Display the outputs
    cout<<"You consumed "<<nCal<<" calories.";
    //Exit stage right or left!
    return 0;
}

