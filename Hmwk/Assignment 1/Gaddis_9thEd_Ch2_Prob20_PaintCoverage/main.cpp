/* 
 * File:   main.cpp
 * Author: CHristopher Mathis
 * Created on January 9, 2020, 12:30 PM
 * Purpose:  Paint Coverage
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
    float length,height;//length and height of fence in feet
    float srfArea,pntArea;//surface area and paint area in ft^2
    float pCvrge;//paint can coverage in ft^2
    int nCans;//Number of cans of paint needed
    
    //Input or initialize values Here
    length=100;//100 feet long
    height=6;//6 feet tall
    pCvrge=340;//340 ft^2
    
    //Process/Calculations Here
    srfArea=length*height;//Surface Area of 1 side
    pntArea=4*srfArea;//Total painted area 
    nCans=pntArea/pCvrge+1;//No partial cans of paint
    
    //Output Located Here
    cout<<"Fence Height = "<<height<<" ft\n";
    cout<<"Fence Length = "<<length<<" ft\n";
    cout<<"Number of cans of paint = "<<nCans<<endl;

    //Exit
    return 0;
}

