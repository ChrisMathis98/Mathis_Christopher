/* 
 * Author: Christopher Mathis
 * Created on January 21, 2020
 * Purpose: Use loops to calculate occupancy of a hotel per floor
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int floors,rooms,occupy,tOcc,tUnocc,tRooms;
    float perc;
    
    //Initialize Variables
    tOcc=tUnocc=tRooms=0;
    
    cout<<"Enter how many floors there are:\n";
    cin>>floors;
    if (floors<1){//not allowing them to enter less than one floors
        cout<<"Invalid entry, Reenter:\n";
        cin>>floors;
    }
    for (int flor=1; flor<=floors; flor++){
    if (flor==13){//skip the 13th floor
            continue;
    }
    cout<<"Enter how many rooms are on floor "<<flor<<":\n";
    cin>>rooms;
    /*if (rooms<10){//not allowing them to enter less than 10 rooms
        cout<<"Invalid entry, Reenter:\n";
        cin>>rooms;
    }*/
    cout<<"Enter how many are occupied:\n";
    cin>>occupy;
    if (occupy<0){//not allowing them to enter a negative number for ocuppied rooms
        cout<<"Invalid entry, Reenter:\n";
        cin>>occupy;
    }
    tOcc+=occupy;//calculates the total occupied
    tRooms+=rooms;//calculates the total rooms
    tUnocc=tRooms-tOcc;//calculates the total unoccupied
    }
    //Process or map Inputs to Outputs
    perc=static_cast<float>(tOcc)/tRooms*100;//calculates the percentage of occupied rooms
    
    //Display Outputs
    cout<<fixed<<setprecision(1);
    cout<<"There are "<<tOcc<<" rooms occupied.\n";
    cout<<"There are "<<tUnocc<<" rooms unoccupied.\n";
    cout<<perc<<"%"<<" of rooms are occupied.";
    
    //Exit stage right!
    return 0;
}