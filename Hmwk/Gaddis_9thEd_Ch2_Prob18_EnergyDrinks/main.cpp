/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 9, 2020, 1:00 PM
 * Purpose:  Energy Drinks Survey
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int survey;//Number of people surveyed
    float pEDrnk;//Percentage Energy Drinkers
    float pCitFlv;//Percentage that prefer Citrus
    int nDrnks;//How many purchased the drink
    int nCitFlv;//How many preferred citrus flavor
    
    //Input or initialize values Here
    survey=16500;
    pEDrnk=0.15;
    pCitFlv=0.58;
    
    //Process/Calculations Here
    nDrnks=survey*pEDrnk+0.5;//Round correctly for number of drinkers
    nCitFlv=survey*pEDrnk*pCitFlv+0.5;//Round correctly for number who prefer citrus
    
    //Output Located Here
    cout<<"The amount of people who drink Energy Drinks is "<<nDrnks<<endl;
    cout<<"The amount that prefer citrus flavor is "<<nCitFlv<<endl;
    
    //Exit
    return 0;
}

