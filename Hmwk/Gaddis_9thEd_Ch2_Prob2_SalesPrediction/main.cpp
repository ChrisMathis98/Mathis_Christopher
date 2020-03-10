/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 8, 2020, 5:45 PM
 * Purpose: Predict Sales
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Constants - No Global Constants
//Only Universal Constants, Math, Physics, Conversions

// Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants 
    float totSale;//total sales of company
    float ecPerc;//East Coast division % of total sales
    float ecSales;//East Coast division sales
    
    //Initialize Variables 
    totSale=8.6e6;//total sales of company is 8.6 million
    ecPerc=.58;//East Coast division generates 58% of total sales
    
    //Process or map Inputs to Outputs
    ecSales=ecPerc*totSale;
    
    //Display Outputs
    cout<<"The East Coast Division Will Generate $"<<ecSales<<endl;
    
    //Exit stage Right!
    return 0;
}