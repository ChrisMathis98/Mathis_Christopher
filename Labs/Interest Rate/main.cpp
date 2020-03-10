/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 8, 2020, 12:20 PM
 * Purpose: Savings Function
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float CNVPERC=100;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    //Initialize Variables
    
    float fvc,pvc,ic,ne;
    
    float pv=100;//present value is $100
    float i=.08;//interest rate is 8%
    float n=9;//compounding period is 9 years
    float fv=199.90;//future value is $199.90
    
    //Process/Calculations Here
    fvc=pv * pow(1 + i, n);
    pvc=fv / pow(1 + i, n);
    ic=pow(fv / pv, 1/n) - 1;
    n=log10(fv / pv) / log10(1 + i);
    ne=log(fv / pv) / log(1 + i);
      
    //Output Located Here
    
    cout<<"Input Present Value in Dollars"<<endl;
    cout<<"Input Interest Rate in Percent"<<endl;
    cout<<"Input Compounding Period in Years"<<endl;
    cin>>pv>>i>>n;
    cout<<endl;
    
    cout<<"The Present Value is $"<<pv<<endl;
    cout<<"The Present Value is $"<<pvc<<endl;
    cout<<"The Future Value is $"<<fv<<endl;
    cout<<"The Future Value is $"<<fvc<<endl;
    cout<<"The Interest Rate is "<<i<<"%"<<endl;
    cout<<"The Interest Rate is "<<ic*CNVPERC<<"%"<<endl;
    cout<<"The Compounding Period is "<<n<<" Years"<<endl;
    cout<<"The Compounding Period is "<<ne<<" Years"<<endl;
    
    //Exit
    return 0;
}

