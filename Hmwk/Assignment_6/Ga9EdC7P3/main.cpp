/* 
 * Author: Christopher Mathis
 * Created on February 7, 2020
 * Purpose: Sales of slasa using arrays
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int SIZE=5;
    string salsa[]={"mild", "medium", "sweet", "hot", "zesty"};
    float profit[SIZE], total;
    int lowest, highest;
    
    //Initialize Variables
    lowest=highest=total=0;//initially set values
    
    //Process or map Inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;//set to 2 decimal spaces
    for(int i=0; i<SIZE; i++){//for loop to get sales for each salsa type, stores in array
        cout<<"Enter the sales of "<<salsa[i]<<" salsa:$\n";
        cin>>profit[i];
        total+=profit[i];
    }
    for(int j=0; j<SIZE; j++){//for loop to find lowest and highest selling product
        if(profit[j]<profit[lowest]){
            lowest=j;
        }
        if(profit[j]>profit[highest]){
            highest=j;
        }
    }
    
    //Display Outputs
    cout<<"Type     Sales\n";
    cout<<salsa[0]<<"     "<<"$"<<profit[0]<<endl;
    cout<<salsa[1]<<"   "<<"$"<<profit[1]<<endl;
    cout<<salsa[2]<<"    "<<"$"<<profit[2]<<endl;
    cout<<salsa[3]<<"      "<<"$"<<profit[3]<<endl;
    cout<<salsa[4]<<"    "<<"$"<<profit[4]<<endl;
    
    cout<<"Total Sales was $"<<total<<endl;
    cout<<salsa[lowest]<<" was the lowest selling product.\n";
    cout<<salsa[highest]<<" was the highest selling product.";

    //Exit stage right!
    return 0;
}