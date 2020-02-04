/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 9, 2020, 1:20 PM
 * Purpose: East Coast Sales Prediction
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
    float totSls;//Total Company Sales in dollars
    float pEstCst;//Percentage East Coast Sales
    int eCstSls;//East Coast Sales in dollars
    int pCstSls;//East Coast Sales to nearest penny
    int nDollars;//Number of Dollars
    int nDimes;//Number of Dimes
    int nPenny;//Number of Pennies
    
    //Input or initialize values Here
    totSls=8.6e6;//8.6 million dollars
    pEstCst=0.58;//58 percent of total sales
    
    //Process/Calculations Here
    eCstSls=totSls*pEstCst+0.5;//Rounding to nearest dollar
    pCstSls=(totSls*pEstCst+0.005)*100;//Rounding to nearest penny
    nDollars=pCstSls/100;
    nDimes=(pCstSls-nDollars*100)/10;
    nPenny=pCstSls-nDollars*100-nDimes*10;
    
    //Output Located Here
    cout<<"East Coast Sales in Dollars = $"<<eCstSls<<endl;
    cout<<"East Coast Sales with Pennies = $"<<nDollars<<
            "."<<nDimes<<nPenny<<endl;

    //Exit
    return 0;
}

