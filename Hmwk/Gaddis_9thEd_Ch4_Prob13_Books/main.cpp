/* 
 * Author: Christopher Mathis
 * Created on January 20, 2020
 * Purpose: Calculates and shows the amount of points earned that month
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
    int num;
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter how many books you purchased this month:\n";
    cin>>num;//input number of books bought 
    
    if (num<1){//if you didnt buy any books, you wont get any points
        cout<<"You earned 0 points.";
    }
    else if (num<2){//if you buy 1 book then you get 5 points
        cout<<"You earned 5 points.";
    }
    else if (num<3){//if you buy 2 books then you get 15 points
        cout<<"You earned 15 points.";
    }
    else if (num<4){//if you get 3 books then you get 30 points
        cout<<"You earned 30 points.";
    }
    else{//if you buy anymore than 3 books then you get 60 points
        cout<<"You earned 60 points.";
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}