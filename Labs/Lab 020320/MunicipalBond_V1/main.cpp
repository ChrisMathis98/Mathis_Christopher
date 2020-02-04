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
    float balance,
          intRate,
          interest;
    int nYears,
        year,
        dYear;
    
    //Input or initialize values Here
    balance=100;//Savings in $
    intRate=6;//Yearly Interest Rate
    nYears=30;//Number of years to save
    year=0;//year counter
    dYear=2020;//Year date
    
    //Process/Calculations Here
    intRate/=CNVDCML;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year  Balance Interest"<<endl;
    for(year++, dYear++; year<=nYears; year++, dYear++){
        balance*=(1+intRate);
        interest=balance*intRate;
        cout<<setw(4)<<year<<setw(6)<<dYear
            <<setw(9)<<balance<<setw(9)<<interest<<endl;
    }
    
    //Output Located Here

    //Exit
    return 0;
}

