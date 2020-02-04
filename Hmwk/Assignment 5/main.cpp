/* 
 * Author: Christopher Mathis
 * Created: January 30, 2020
 * Purpose: Create a menu which provides several different solutions to problems
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
float calculateRetail(float,float);
float getSales(string);
void findHighest(float,float,float,float);
float kineticEnergy(float,float);
void getScore(int &score);
void calcAverage(int,int,int,int,int);
int findLowest(int,int,int,int,int);
bool isPrime(int);

//Execution Begins Here
int main(int argc, char** argv){
    //Declare Variable Data Types and Constants
    unsigned char nProb;
    int choice;
    
    //Initialize Variables
    nProb=5;
    
    //Use loops for menu here
    do{
        //Display menu
        cout<<"Choose the Problem Solution to Display\n";
        cout<<"1. Problem Solution for Retail Price\n";
        cout<<"2. Problem Solution for Division Quarterly Sales\n";
        cout<<"3. Problem Solution for Kinetic Energy\n";
        cout<<"4. Problem Solution for Average Test Scores\n";
        cout<<"5. Problem Solution for Is it Prime?\n";
        cout<<"Enter Any Other Key to Exit"<<endl;
        cin>>choice;
        
        //Dependent on choice
        switch(choice){
            case 1:{
                //Declare Variable Data Types and Constants
                float wcost, mperc;

                //Initialize Variables


                //Process or map Inputs to Outputs
                cout<<"Enter the wholesale cost:\n";
                cin>>wcost;//enter wholesale price
                cout<<"Enter the markup percentage:\n";
                cin>>mperc;//enter markup percentage

                //Display Outputs
                cout<<fixed<<setprecision(2);//setting two 2 decimal points
                cout<<"The retail price is $"<<calculateRetail(wcost,mperc)<<endl;
                break;
            }
            case 2:{
                //Declare Variable Data Types and Constants
                float Northeast,Southeast,Northwest,Southwest;

                //Returns the sales of each string division into the variables
                Northeast=getSales("Northeast");
                Southeast=getSales("Southeast");
                Northwest=getSales("Northwest");
                Southwest=getSales("Southwest");

                //figure out which division had the highest sales and outputs that info
                findHighest(Northeast,Southeast,Northwest,Southwest);
                cout<<endl;
                break;
            }
            case 3:{
                //Declare Variable Data Types and Constants
                float mass,velocity;//the mass and velocity of the object (should be given)
                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<fixed<<setprecision(1)<<showpoint;//sets the numbers to 1 decimal places
                cout<<"Enter the object's mass:\n";
                cin>>mass;
                cout<<"Enter the object's velocity:\n";
                cin>>velocity;
                cout<<"The object has "<<kineticEnergy(mass,velocity)<<" Joules of energy."<<endl;//outputs the function using mass and velocity as values
                break;
            }
            case 4:{
                //Declare Variable Data Types and Constants
                int score1,score2,score3,score4,score5;

                //Getting scores from user
                getScore(score1);
                getScore(score2);
                getScore(score3);
                getScore(score4);
                getScore(score5);

                //Process or map Inputs to Outputs
                calcAverage(score1,score2,score3,score4,score5);
                cout<<endl;
                break;
            }
            case 5:{
                //Declare Variable Data Types and Constants
                int num;//inputed number
                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Enter a number:\n";
                cin>>num;
                if (isPrime(num)==true){//if function is true then output is prime
                    cout<<num<<" is a prime number."<<endl;
                }
                else cout<<num<<" is not a prime number."<<endl;//if function is flase then output is not prime
                break;
            }
    }
    }while(choice<=nProb && choice>0);
    //Exit stage right!
    return 0;
}

bool isPrime(int n){
    int i;
    for (i=2; i<=pow(n,0.5); i++){//for loop to check if number is divisible by any number other than itself
        if (n%i==0) return false;
        else return true;
    }
}

void calcAverage(int test1, int test2, int test3, int test4, int test5){//calculates the average while dropping lowest score
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average is "<<((test1+test2+test3+test4+test5)-findLowest(test1,test2,test3,test4,test5))/4.0;
}

int findLowest(int score1, int score2, int score3, int score4, int score5){//finds the lowest score 
    if      (score1<score2 && score1<score3 && score1<score4 && score1<score5) return score1;
    else if (score2<score1 && score2<score3 && score2<score4 && score2<score5) return score2;
    else if (score3<score1 && score3<score2 && score3<score4 && score3<score5) return score3;
    else if (score4<score1 && score4<score2 && score4<score3 && score4<score5) return score4;
    else return score5;
}
void getScore(int &score){//stores the scores inputted by the user
    cout<<"Enter a test score:\n";
    cin>>score;
    while (score<0 || score>100){
        cout<<"Invalid entry, Reenter:\n";
        cin>>score;
    }
}

float kineticEnergy (float m,float v){
    return (0.5*m*v*v);
}

void findHighest(float ne, float se, float nw, float sw){
    if (ne>se && ne>nw && ne>sw) cout<<"The Northeast division had the highest sales of $"<<ne;
    else if (se>ne && se>nw && se>sw) cout<<"The Southeast division had the highest sales of $"<<se;
    else if (nw>ne && nw>se && nw>sw) cout<<"The Northwest division had the highest sales of $"<<nw;
    else if (sw>ne && sw>se && sw>nw) cout<<"The Southwest division had the highest sales of $"<<sw;
}

float getSales(string division){
    cout<<fixed<<setprecision(2)<<showpoint;
    float sales;
    cout<<"Enter the sales for "<<division<<" division:$\n";
    cin>>sales;
    while (sales<0){
        cout<<"Invalid entry, Reenter:\n";
        cin>>sales;
    }
    return sales;
}
    
float calculateRetail(float cost,float mark){
    return cost+(cost*(mark/100));
}