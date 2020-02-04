/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Military and NASA budget
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
    const int CNVPERC=100;  //conversion to percentage
    float fedBudg,milBudg,nasaBdg;//Budgets
    float percMil,prcNasa;//Percentage compared to total budget
    
    //Input or initialize values Here
    fedBudg=4.1e12f;//total = 4.1 trillion
    milBudg=686e9f;//military = 686 billion
    nasaBdg=21.5e9f;//nasa = 21.5 billion
    
    //Process/Calculations Here
    cout<<"Federal Budget = $"<<fedBudg<<endl;
    cout<<"Military Budget = $"<<milBudg<<endl;
    cout<<"Nasa Budget = $"<<nasaBdg<<endl;
    cout<<"Percentage Military = "<<milBudg/fedBudg*CNVPERC<<"%"<<endl;
    cout<<"Percetnage NASA = "<<nasaBdg/fedBudg*CNVPERC<<"%"<<endl;
    //Output Located Here
    
    //Exit
    return 0;
}

