/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 8, 2020, 7:10 PM
 * Purpose: Total Purchase
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Constants - No Global Constants
//Only Universal Constants, Math, Physics, Conversions

// Function Prototypes

//Execution BEgins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //DeclareVariable Data Types and Constants 
    float item1,item2,item3,item4,item5;//declared given variables
    float subTot,tax,total;//declared desired variables
    
    //Initialize Variables 
    item1=15.95;
    item2=24.95;
    item3=6.95;
    item4=12.95;
    item5=3.95;
    
    //Process or map Inputs to Outputs
    subTot=item1+item2+item3+item4+item5;//sum of items
    tax=.07*subTot;//tax is 7%
    total=subTot+tax;
    
    //Display Outputs
    cout<<"Item 1 is $"<<item1<<endl;
    cout<<"Item 2 is $"<<item2<<endl;
    cout<<"Item 3 is $"<<item3<<endl;
    cout<<"Item 4 is $"<<item4<<endl;
    cout<<"Item 5 is $"<<item5<<endl;
    
    cout<<"The subtotal of the sale is $"<<subTot<<endl;
    cout<<"The amount of sales tax is $"<<tax<<endl;
    cout<<"The total is $"<<total<<endl;
    
    //Exit stage Right!
    return 0;
}