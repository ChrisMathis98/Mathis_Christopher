/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 21, 2020, 12:00 PM
 * Purpose: Menus
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
float CNVGAL=0.264279;//conversion of liter to gallons
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    float liters,miles,mpg;
    
    //Input or initialize values Here
    liters=rand()%31+50;//[50,80] liters of gas
    miles=rand()%451+200;//[200,650] miles
    
    //Process/Calculations Here
    mpg=miles/(liters*CNVGAL);
    
    //Output Located Here
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<miles<<" miles/"<<liters<<" liters = "<<mpg<<" miles/gallon"<<endl;
    //Exit
    return 0;
}

