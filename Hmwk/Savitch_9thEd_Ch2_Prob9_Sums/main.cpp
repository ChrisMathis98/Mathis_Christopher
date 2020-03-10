/* 
 * Author: Christopher Mathis
 * Date: January 16, 2020, 1:30 PM
 * Purpose: Calculating sum of 10 numbers 
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare variables or constants here
    float nSum,pSum;//Variables we want to compute
    float x;//Variable to input 10 times
    
    //Initialize or input data here
    cout<<"Input 10 numbers, any order, positive or negative\n";
    
    cin>>x;//Input the values 10 times
    x>0?pSum+=x:nSum+=x;
    
    cin>>x;
    x>0?pSum+=x:nSum+=x;
    
    cin>>x;
    x>0?pSum+=x:nSum+=x;
    
    cin>>x;
    x>0?pSum+=x:nSum+=x;
    
    cin>>x;
    x>0?pSum+=x:nSum+=x;
    
    cin>>x;
    x>0?pSum+=x:nSum+=x;
    
    cin>>x;
    x>0?pSum+=x:nSum+=x;
    
    cin>>x;
    x>0?pSum+=x:nSum+=x;
    
    cin>>x;
    x>0?pSum+=x:nSum+=x;
    
    cin>>x;
    x>0?pSum+=x:nSum+=x;
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    cout<<"Negative sum ="<<setw(4)<<nSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<pSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<nSum+pSum;
    
    //Exit stage left
    return 0;
}


