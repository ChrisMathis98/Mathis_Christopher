/* 
 * Author: Christopher Mathis
 * Created on January 20, 2020
 * Purpose: Calculates which rectangle has the greater area or if they are equal
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int wid1,hght1,wid2,hght2;//the vriables to be inputed 
    int area1,area2;//the areas to be calculated based on inputs
    //Initialize Variables
    cout<<"Enter the width of rectangle 1:\n";
    cin>>wid1;
    cout<<"Enter the height of rectangle 1:\n";
    cin>>hght1;
    cout<<"Enter the width of rectangle 2:\n";
    cin>>wid2;
    cout<<"Enter the height of rectangle 2:\n";
    cin>>hght2;
    //Process or map Inputs to Outputs
    area1=wid1*hght1;//area equals width times height
    area2=wid2*hght2;//area equals width times height
    
    if(area1<area2){//first possible statement, rectangle 2 is larger
        cout<<"Rectangle 2 has the greater area";
    }
        else if(area2<area1){//second possible statement, rectangle 1 is larger
            cout<<"Rectangle 1 has the greater area";
        }
            else{//third/last possible statement, rectangles are same size
                cout<<"The rectangles have the same area";
            }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}