/* 
 * Author: Christopher Mathis
 * Created on Februrary 9, 2020
 * Purpose: Searching Array of Strings
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
bool isFound(string[], int, string);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int NUM_NAMES=20;
	string names[NUM_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
							 "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
							 "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							 "James, Jean", "Weaver, Jim", "Pore, Bob",
							 "Rutherford, Greg", "Javens, Renee",
							 "Harrison, Rose", "Setzer, Cathy",
							 "Pike, Gordon", "Holland, Beth" };
	string name;
    //Initialize Variables
    cout<<"Enter a name to search for:\n";
    cin>>name;
    
    //Process or map Inputs to Outputs
    if(isFound(names, NUM_NAMES, name)==true){
        cout<<"The name was found";
    }
    else{
        cout<<"The name was not found";
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}

bool isFound(string a[], int b, string c){
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