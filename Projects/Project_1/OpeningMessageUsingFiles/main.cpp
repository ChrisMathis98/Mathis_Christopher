/* 
 * Author: Christopher Mathis
 * Created: February 3, 2020
 * Purpose: Creating Opening Message With Files
 */

//System Libraries
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    fstream inFile;
    string fileName;
    
    //Initialize Variables
    fileName="msg.dat";
    
    //Process or map Inputs to Outputs
    inFile.open(fileName);
    string msg;
    
    //Display Outputs
    while(inFile>>msg){
        cout<<msg<<" ";
    }
    
    //Exit stage right!
    inFile.close();
    return 0;
}