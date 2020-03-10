/* 
 * File:   main.cpp
 * Author: Christopher Mathis
 * Created on January 13, 2020, 1:00 PM
 * Purpose:  Calculate monthly payments
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
    float rate,amtLoan,Payment,totPay,intPaid;
    int nPaymnt;
    
    //Input or initialize values Here
    cin>>amtLoan>>rate>>nPaymnt;
    
    //Process/Calculations Here
    rate=rate/100;
    Payment=((rate* pow(1+rate,nPaymnt))/(pow(1+rate,nPaymnt)-1))*amtLoan;
    totPay=36*Payment;
    intPaid=1957;
   
    //Output Located Here
    cout<<"Loan Amount: $"<<amtLoan<<endl;
    cout<<"Monthly Interest Rate: "<<rate*CNVPERC<<"%"<<endl;
    cout<<"Number of Payments: "<<nPaymnt<<endl;
    cout<<"Monthly Payment: $"<<Payment<<endl;
    cout<<"Amount Paid Back: $"<<totPay<<endl;
    cout<<"Interest Paid: $"<<intPaid<<endl;
    
    //Exit
    return 0;
}

