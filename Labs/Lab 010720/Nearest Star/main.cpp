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
const float VLIGHT=3e5f;//velocity of light in km
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
    
    //Input or initialize values Here
    cout<<"Input distance to star in light years"<<endl;
    cin>>distLyr;
    //Process/Calculations Here
    distMls=distLyr*VLIGHT*CNVMIN*CNVHRS*CVNDAYS*CVNYEAR*CVNKMM;
    
    //Output Located Here
    cout<<distLyr<<"Light Years = "<<distMls/TRILLIN<<" Trillion Miles"<<endl;

    //Exit
    return 0;
}

