/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on February 3, 2020
 * Purpose: Municipal Bond Savings
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float CNVDCML=100;//Converion to decimal from percent

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float itmCost,
          infRate,
          inflation;
    int nYears,
        year,
        dYear;
    
    //Input or initialize values Here
    itmCost=0.19;//Cost in $ in 1961
    infRate=5;//Yearly Inflation Rate
    nYears=59;//Number of years to save
    year=0;//year counter
    dYear=1961;//Year date
    
    //Process/Calculations Here
    infRate/=CNVDCML;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year  ItemCost Inflation"<<endl;
    for(year++, dYear++; year<=nYears; year++, dYear++){
        itmCost*=(1+infRate);
        inflation=itmCost*infRate;
        cout<<setw(4)<<year<<setw(6)<<dYear
            <<setw(9)<<itmCost<<setw(9)<<inflation<<endl;
    }
    
    //Output Located Here

    //Exit
    return 0;
}

