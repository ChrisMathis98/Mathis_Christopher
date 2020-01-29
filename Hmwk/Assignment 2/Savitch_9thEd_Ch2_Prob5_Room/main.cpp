/* 
 * Author: Christopher Mathis
 * Date: January 16, 2020, 12:45 PM
 * Purpose: Determine if the room exceeds max capacity or not
 */

//System Libraries - Post Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare variables or constants here
    int max;//max capacity
    int num;//the inputed number of people
    int diff;//the difference between the max and amount in the room
    
    //Initialize or input data here
    cout<<"Input the maximum room capacity and the number of people\n";
    cin>>max;//input max capacity
    cin>>num;//input the number of people in the room
    diff=abs(num-max);//the absolute value of the difference between max and num
    
    //Process inputs  - map to outputs here
    if(num<=max) {
        cout<<"Meeting can be held.\n"<<"Increase number of people by ";
        cout<<diff;
        cout<<" will be allowed without violation.";
    }
    
    else {
        cout<<"Meeting cannot be held.\n"<<"Reduce number of people by ";
        cout<<diff;
        cout<<" to avoid fire violation.";
    }
    //Format and display outputs here
    
    //Exit stage left
    return 0;
}

