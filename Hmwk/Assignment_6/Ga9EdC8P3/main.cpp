/* 
 * Author: Christopher Mathis
 * Created on February 9, 2020
 * Purpose: Lottery Ticket Binary Search
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
bool isFound(int[], int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int num;//winning lotto number to be entered
    const int SIZE=10;
    int ticket[]={13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    
    //Initialize Variables
    cout<<"Enter the winning number:\n";
    cin>>num;
    
    //Process or map Inputs to Outputs
    if(isFound(ticket, SIZE, num)==true){//if statement to see if they win
        cout<<"Congratulations you have won!";
    }
    else{//else statement to output they didnt win
        cout<<"No winning numbers.";
    }
    //Display Outputs
    
    //Exit stage right!
    return 0;
}

bool isFound(int a[], int b, int c){
    int first=0, last=b-1, middle;
    while(first<=last){
        middle=(first+last)/2;
        if(a[middle]==c){
            return true;
        }
        else if(a[middle]>c){
            last=middle-1;
        }
        else if(a[middle]<c){
            first=middle+1;
        }
    }
    return false;
}