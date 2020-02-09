/* 
 * Author: Christopher Mathis
 * Created on February 5, 2020
 * Purpose: Using arrays to display min and max of a data list 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const unsigned int SIZE=10;//size of the array [0,9]

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    unsigned int max, min;//max and min variables
    unsigned int num[SIZE];//array of nums with given size
    
    //Initialize Variables
    cout<<"Enter 10 integers:\n";//input integers into array
    cin>>num[0];
    cin>>num[1];
    cin>>num[2];
    cin>>num[3];
    cin>>num[4];
    cin>>num[5];
    cin>>num[6];
    cin>>num[7];
    cin>>num[8];
    cin>>num[9];
    
    //Process or map Inputs to Outputs
    max=0;//min value an integer can be, so that you can find the max
    for(int i=0; i<10; i++){//for loop to go through array
        if(num[i]>max)max=num[i];//tests each integer to see which is max
    }
    cout<<max<<" is the highest number.\n";
    
    min=max;//max value of the integers stored, so that you can find the min
    for(int j=0; j<10; j++){//for loop to go through array
        if(num[j]<min)min=num[j];//test each integer to see which is min
    }
    cout<<min<<" is the lowest number.";
    
    //Display Outputs
    
    //Exit stage right!
    return 0;
}