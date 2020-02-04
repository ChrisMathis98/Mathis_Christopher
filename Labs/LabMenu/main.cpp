/* 
 * Author: Christopher Mathis
 * Created: January 26, 2020
 * Purpose: Create a menu which provides several different solutions to problems
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float PI=3.14159;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned char nProb;
    int choice;
    
    //Initialize Variables
    nProb=10;
    
    //Use loops for menu here
    do{
        //Display menu
        cout<<"Choose the Problem Solution to Display\n";
        cout<<"1. Problem Solution for Largest Number\n";
        cout<<"2. Problem Solution for Roman Numeral Converter\n";
        cout<<"3. Problem Solution for Magic Date\n";
        cout<<"4. Problem Solution for Larger Area\n";
        cout<<"5. Problem Solution for Mass to Weight Converter\n";
        cout<<"6. Problem Solution for Book Points\n";
        cout<<"7. Problem Solution for Distance in Different Mediums\n";
        cout<<"8. Problem Solution for Freezing and Boiling Temperatures\n";
        cout<<"9. Problem Solution for Area Calculator\n";
        cout<<"10. Problem Solution for Phone Charges\n";
        cout<<"Enter any key other than 1-10 to Exit\n"<<endl;
        cin>>choice;
        
        //Dependent on choice
        switch(choice){
            case 1:{
                //Declare Variable Data Types and Constants
                int num1,num2,large;//num1 and num2 are to be inputed, large is to determine which number is larger
                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Enter a number:\n";
                cin>>num1;
                cout<<"Enter a number:\n";
                cin>>num2;

                large=(num1<num2)?num2:num1;//determines which number is larger

                //Display Outputs
                cout<<large<<" is larger\n";
                break;
            }
            case 2:{
                //Declare Variable Data Types and Constants
                int num;

                //Initialize Variables
                cout<<"Enter a number between 1 and 10:\n";
                cin>>num;//number to be inputed
                
                //Process or map Inputs to Outputs
                if(num<1 || num>10){//if statement to make sure the inputed number is betwween 1 and 10
                    cout<<"Entered number is not valid, reenter number:\n";//error message if inputed number is outside [1,10]
                    cin>>num;//input number that is within range [1,10]
                }
                    switch(num){//switch statement to display correct conversion from digit to numerals
                    case 1:cout<<"1 is I in Roman numerals\n";break;
                    case 2:cout<<"2 is II in Roman numerals\n";break;
                    case 3:cout<<"3 is III in Roman numerals\n";break;
                    case 4:cout<<"4 is IV in Roman numerals\n";break;
                    case 5:cout<<"5 is V in Roman numerals\n";break;
                    case 6:cout<<"6 is VI in Roman numerals\n";break;
                    case 7:cout<<"7 is VII in Roman numerals\n";break;
                    case 8:cout<<"8 is VIII in Roman numerals\n";break;
                    case 9:cout<<"9 is IX in Roman numerals\n";break;
                    case 10:cout<<"10 is X in Roman numerals\n";break;
                    default:cout<<"Invalid Entry, Reenter\n";
                    }
                break;
            }
            case 3:{
                //Declare Variable Data Types and Constants
                int month,day,year;//the month, day and year in numeric digits
                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Enter a month:\n";
                cout<<"Enter a day:\n";
                cout<<"Enter a year:\n";
                cin>>month>>day>>year;//input the date

                if(year==month*day){//if the two digits multiplies equal the year then it will display the first message
                    cout<<"The date is magic\n";
                }
                else{//if they do not equal the year then display this message
                    cout<<"The date is not magic\n";
                }
                break;
            }
            case 4:{
                //Declare Variable Data Types and Constants
                int wid1,hght1,wid2,hght2;//the vriables to be inputed 
                int area1,area2;//the areas to be calculated based on inputs
                //Initialize Variables
                cout<<"Enter the width of rectangle 1:\n";
                cin>>wid1;
                cout<<"Enter the height of rectangle 1:\n";
                cin>>hght1;
                cout<<"Enter the width of rectangle 2:\n";
                cin>>wid2;
                cout<<"Enter the height of rectangle 2:\n";
                cin>>hght2;
                //Process or map Inputs to Outputs
                area1=wid1*hght1;//area equals width times height
                area2=wid2*hght2;//area equals width times height

                if(area1<area2){//first possible statement, rectangle 2 is larger
                    cout<<"Rectangle 2 has the greater area\n";
                }
                    else if(area2<area1){//second possible statement, rectangle 1 is larger
                        cout<<"Rectangle 1 has the greater area\n";
                    }
                        else{//third/last possible statement, rectangles are same size
                            cout<<"The rectangles have the same area\n";
                        }
                break;
            }
            case 5:{
                //Declare Variable Data Types and Constants
                float mass,weight;//input of mass and the calculated variable of weight
                //Initialize Variables
                cout<<fixed<<setprecision(1)<<showpoint;//setting it to one decimal place
                cout<<"Enter the mass of an object:\n";
                cin>>mass;//input the mass
                weight=mass*9.8;
                //Process or map Inputs to Outputs
                if(weight<10){//if it weighs less than 10 N display this message 
                    cout<<"The object is too light\n";
                }
                if(weight>1000){//if it weighs more than 1000 N display this message
                    cout<<"The object is too heavy\n";
                }
                else{//if it isnt <10 or >1000 display the weight
                    cout<<"The object weighs "<<weight<<" newtons"<<endl;
                }
                break;
            }
            case 6:{
                //Declare Variable Data Types and Constants
                int num;

                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Enter how many books you purchased this month:\n";
                cin>>num;//input number of books bought 

                if (num<1){//if you didnt buy any books, you wont get any points
                    cout<<"You earned 0 points.\n";
                }
                else if (num<2){//if you buy 1 book then you get 5 points
                    cout<<"You earned 5 points.\n";
                }
                else if (num<3){//if you buy 2 books then you get 15 points
                    cout<<"You earned 15 points.\n";
                }
                else if (num<4){//if you get 3 books then you get 30 points
                    cout<<"You earned 30 points.\n";
                }
                else{//if you buy anymore than 3 books then you get 60 points
                    cout<<"You earned 60 points.\n";
                }
                break;
            }
            case 7:{
                //Declare Variable Data Types and Constants
                char medium;//character to be used for the menu
                float dist;//the distance to be inputed by user in feet

                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Choose which medium the sound wave will travel in.\n";
                cout<<"1.Air\n2.Water\n3.Steel\n";
                cin>>medium;
                cout<<"Enter the distance the wave will travel:\n";
                cin>>dist;

                cout<<fixed<<setprecision(4);//sets the precision to 4 decimal places

                if(dist<0){//if they input an incorrect value, it will not display this message
                    cout<<"Please enter a distance greater than zero";
                }
                else{//if they did input a correct value for distance then it continues with the selected calculation
                    switch(medium){//based on the character entered, the specific calculation would take place
                        case '1':cout<<"The wave will take "<<(dist/1100)<<" seconds\n";break;
                        case '2':cout<<"The wave will take "<<(dist/4900)<<" seconds\n";break;
                        case '3':cout<<"The wave will take "<<(dist/16400)<<" seconds\n";break;
                        default:cout<<"You did not enter one of the available choices\n";break;//if they inputed an incorrect character for the menu this message will display
                    }
                }
                break;
            }
            case 8:{
                //Declare Variable Data Types and Constants
                int temp;//inputed temp by user
                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Enter a temperature:\n";
                cin>>temp;

                //if statements for the program to go through and see which statments will be displayed
                if(temp<=-173) cout<<"Ethyl alcohol will freeze\n";
                if(temp<=-38) cout<<"Mercury will freeze\n";
                if(temp<=-362) cout<<"Oxygen will freeze\n";
                if(temp<=32) cout<<"Water will freeze\n";
                if(temp>=172) cout<<"Ethyl alcohol will boil\n";
                if(temp>=676) cout<<"Mercury will boil\n";
                if(temp>=-306) cout<<"Oxygen will boil\n";
                if(temp>=212) cout<<"Water will boil\n";
                break;
            }
            case 9:{
                //Declare Variable Data Types and Constants
                int choice;
                float rad,lngth,hght,base,area;
                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Geometry Calculator\n";
                cout<<"1. Calculate the Area of a Circle\n";
                cout<<"2. Calculate the Area of a Rectangle\n";
                cout<<"3. Calculate the Area of a Triangle\n";
                cout<<"4. Quit\n";
                cin>>choice;//the users choice of which area they want solved

                if(choice==1){//if they choose 1 do the area of a circle given their values
                    cout<<"Enter the radius of the circle:\n";
                    cin>>rad;
                    if(rad<0){//to make sure they enter a valid value
                        cout<<"Invalid entry, Reenter:\n";
                        cin>>rad;//reenter a valid value
                    }
                    if(rad>0){//if the inputs area valid run it 
                        area=PI*pow(rad,2);//calculate the area
                        cout<<fixed<<setprecision(1)<<"The area of the circle is "<<area<<endl;
                    }
                }
                else if(choice==2){//if they choose 2 do the area of a rectangle given their values
                    cout<<"Enter the length of the rectangle:\n";
                    cin>>lngth;
                    if(lngth<0){//to make sure they enter valid value
                        cout<<"Invalid entry, Reenter:\n";
                        cin>>lngth;//reenter a valid value
                    }
                    cout<<"Enter the height of the rectangle:\n";
                    cin>>hght;
                    if(hght<0){//tp make sure they enter a valid value
                        cout<<"Invalid entry, Reenter:\n";
                        cin>>hght;
                    }
                    if(lngth>0 && hght>0){//if the inputs are valid run it
                        area=lngth*hght;
                        cout<<fixed<<setprecision(1)<<"The area of the rectangle is "<<area;
                    }
                }
                else if(choice==3){//if they choose 3 do the area of a triangle given their values
                    cout<<"Enter the base of the triangle:\n";
                    cin>>base;
                    if(base<0){//to make sure they enter a valid value
                        cout<<"Invalid entry, Reenter:\n";
                        cin>>base;//reenter a valid value
                    }
                    cout<<"Enter the height of the triangle:\n";
                    cin>>hght;
                    if(hght<0){//to make sure they enter a valid value
                        cout<<"Invalid entry, Reenter:\n";
                        cin>>hght;
                    }
                    if(base>0 && hght>0){//if the inputs are valid run it
                        area=base*hght*0.5;
                        cout<<fixed<<setprecision(1)<<"The area of the triangle is "<<area<<endl;
                    }
                }
                else if(choice==4){//if they choose 4 quit the program
                    return 0;
                }
                else{//if they choose something other than 1-4, have them reenter the values
                    cout<<"Invalid entry, Reenter:"<<endl;
                    cin>>choice;
                }
                break;
            }
            case 10:{
                //Declare Variable Data Types and Constants
                float start,fract;
                int nMin;

                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Enter the starting time:\n";
                cin>>start;//input the start time
                cout<<"Enter the number of minutes of the call:\n";
                cin>>nMin;//input the number of minutes of the call

                start= static_cast<int>(start);
                fract= start - static_cast<int>(start);//the fractional component of the hours

                if (start>0 && start<=6 && fract>=0 && fract<0.59)
                    cout<<"The charges are $"<<fixed<<setprecision(2)<<(0.05*nMin)<<endl;
                else if (start>=7 && start<=18 && fract>=0 && fract<0.59)
                    cout<<"The charges are $"<<fixed<<setprecision(2)<<(0.45*nMin)<<endl;
                else if (start>=19 && start<=23 && fract>=0 && fract<0.59)
                    cout<<"The charges are $"<<fixed<<setprecision(2)<<(0.20*nMin)<<endl;
                break;
            }
            default:cout<<"Exiting Menu"<<endl;
        }
    }while(choice<=nProb && choice>0);
    
    //Exit stage right!
    return 0;
}