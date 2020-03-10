/* 
 * Author: Christopher Mathis
 * Created on January 14, 2020, 1:30 PM
 * Purpose: Displays the sin, cosine, and tangent of inputed values
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1);//pi in terms of trig functions
const float CNVDEG=PI/180;//conversion from radians to degrees
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angle;
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions\n";
    cout<<"Input the angle in degrees.\n";
    cin>>angle;
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<fixed;//setting precision for each variable
    cout<<"sin("<<setprecision(0)<<angle<<") = "<<setprecision(4)<<sin(angle*CNVDEG)<<endl;
    cout<<"cos("<<setprecision(0)<<angle<<") = "<<setprecision(4)<<cos(angle*CNVDEG)<<endl;
    cout<<"tan("<<setprecision(0)<<angle<<") = "<<setprecision(4)<<tan(angle*CNVDEG);
    //Exit stage right or left!
    return 0;
}