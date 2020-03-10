/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 7, 2020, 1:15 PM
 * Purpose:  Nearest Star
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float VLIGHT=3e5;//velocity of light in km
const float CNVMIN=60;//Conversion from sec to min
const float CNVHRS=60;//Conversion from min to hrs
const float CVNDAYS=24;//Conversion from hrs to days
const float CVNYEAR=365;//Conversion from days to years
const float CVNKMM=1/1.61;//Conversion from km to mi
const float TRILLIN=1e12;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float distMls;//Distance to star in mi
    float distLyr;//Distance to star in lyr
    float vEscape;//Velocity to escape solar system
    float tArrive;//Time to arrive in Years
    
    //Input or initialize values Here
    cout<<"Input distance to star in light years"<<endl;
    cin>>distLyr;
    vEscape=42.1;//From wikipedia km/s
    
    //Process/Calculations Here
    distMls=distLyr*VLIGHT*CNVMIN*CNVHRS*CVNDAYS*CVNYEAR*CVNKMM;
    tArrive=distLyr*VLIGHT/vEscape;
            
    //Output Located Here
    cout<<distLyr<<"Light Years = "<<distMls/TRILLIN<<" Trillion Miles"<<endl;
    cout<<"Time to arrive = "<<tArrive<<endl;

    //Exit
    return 0;
}

