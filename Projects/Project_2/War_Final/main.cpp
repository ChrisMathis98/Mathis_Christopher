/* 
 * File: main.cpp
 * Author: Christopher Mathis
 * Created on February 14, 2020
 * Purpose: War Final Version
 */

//System Libraries
#include <iostream>     //Input/Output
#include <iomanip>      //Format
#include <ctime>        //Time
#include <cstdlib>      //Srand/Rand
#include <string>       //Strings
#include <fstream>      //File I/O
#include <vector>       //Vectors
using namespace std;    //Standard Name-Space Where System Libraries Exist

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVPERC=100;//Conversion From Decimal To Percent

//Function Prototypes
bool isTrue(char);
int whoWon(int, int, int, int, vector<string>, int []);
void flipCard(int &, int &, int &, int &, vector<string>);
void validate(char);
void cards(int, int, int, int,vector<string>);
void whoWon(int, int, vector<string>, int [], int);
void lesser(int, int, vector<string>, int [], int);
int equal(int &, int &, int &, int &, vector<string>, int [], int, int);
int equal1(int &, int &, int &, int &, vector<string>,int [], int, int);
int equal2(int &, int &, int &, int &, vector<string>, int [], int, int);
int equal3(int &, int &, int &, int &, vector<string>, int [], int, int);
int equal4(int &, int& , int &, int &, vector<string>, int [], int, int);
int equal5(int &, int &, int &, int &, vector<string>, int [], int, int);
int equal6(int &, int &, int &, int &, vector<string>, int [], int, int);
int equal7(int &, int &, int &, int &, vector<string>, int [], int, int);
int equal8(int &, int &, int &, int &, vector<string>, int [], int, int);
int equal9(int &, int &, int &, int &, vector<string>, int [], int, int);
int equal10(int &, int &, int &, int &, vector<string>, int [], int, int);
int equal11(int &, int &, int &, int &, vector<string>, int [], int, int);
void flipCoin(vector<string>, int [], int, int, int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    ifstream in;                                //In From File
    ofstream out;                               //Out To File
    string msg;                                 //String To Use For Input From File 
    char choice;                                //Input From User To Play/Continue
    int pRank, pSuit, cRank, cSuit;             //Rank and Suit Of Cards
    float pPerc, cPerc;                         //Percentage Of Rounds Won
    string cnt;                                 //Statement Variable Used With Ternary Operator
    const int SIZE=4;                           //Size Of Array
    int counter[SIZE]={26, 26, 0, 0};           //Array For Counters
    vector<string> name;                        //Vector For Player Names
    
    //Initialize Variables
    pRank=pSuit=cRank=cSuit=0;
    
    //Display Beginning Message Using File
    in.open("start.dat");
    out.open("stats.dat");
    while(in>>msg){                             //While Loop To Output Everything From File
        cout<<msg<<" ";
    }
    
    //Boolean Test To Start Or Exit Game
    isTrue(choice);
    if(true){
        cin.ignore();
        for(int i=0; i<2; i++){                 //For Loop To Input User Names Into Vector
            string s;
            cout<<"Enter Name For Player "<<i+1<<endl;
            getline(cin,s);
            name.push_back(s);
            cout<<endl;
        }
        string w=" Won";
        name.push_back(name[0]+w);
        name.push_back(name[1]+w);
    
    //Start The Game Loop
    whoWon(pRank, pSuit, cRank, cSuit, name, counter);
    
    //Display The Winner
    if(counter[0]==52){
        cout<<endl<<name[2]<<" :)\n"<<endl;
    }
    else if(counter[1]==52){
        cout<<endl<<name[3]<<" :)\n"<<endl;
    }
    }
    
    pPerc=(static_cast<float>(counter[2])/(counter[2]+counter[3]))*CNVPERC;
    cPerc=(static_cast<float>(counter[3])/(counter[2]+counter[3]))*CNVPERC;
    
    //Output Stats To Player In Program
    cout<<name[2]<<" "<<counter[2]<<" Rounds, Which Is Good For "
            <<fixed<<setprecision(2)<<showpoint<<pPerc<<"% Of The Rounds Played.\n";
    cout<<name[3]<<" "<<counter[3]<<" Rounds, Which Is Good For "
            <<fixed<<setprecision(2)<<showpoint<<cPerc<<"% Of The Rounds Played.\n";
    
    //Output Stats To File
    out<<name[2]<<" "<<counter[2]<<" Rounds, Which Is Good For "
            <<fixed<<setprecision(2)<<showpoint<<pPerc<<"% Of The Rounds Played.\n";
    out<<name[3]<<" "<<counter[3]<<" Rounds, Which Is Good For "
            <<fixed<<setprecision(2)<<showpoint<<cPerc<<"% Of The Rounds Played.\n";
    
    //Exit stage right!
    in.close();
    out.close();
    return 0;
}
//Function To Either Start The Game Or Exit
bool isTrue(char choice){
    cout<<endl<<endl;
    cin>>choice;
    cout<<endl;
    if(choice!='Y' && choice!='y'){//Validating The User Input
        cout<<"Exiting Game.\n";
        exit(EXIT_FAILURE);
    }else{
    return true;
    }
}
//Function To Start and Loop Game
int whoWon(int pRank, int pSuit, int cRank, int cSuit, vector<string> name, int counter[]){
    int a, b, c, d;
    a=b=c=d=0;
    string cnt;//Variable For Ternary Operator
    
    do{
    flipCard(pRank, pSuit, cRank, cSuit, name);
    whoWon(pRank, cRank, name, counter, a);
    lesser(pRank, cRank, name, counter, b);
    equal(pRank, pSuit, cRank, cSuit, name, counter, a, b);
    
    cnt=(counter[0]>0 && counter[1]>0)?"Continue The Game, Flip A Card.\n":"Game Over.\n";
    cout<<cnt;
    }while(counter[0]>0 && counter[1]>0);
}

void flipCard(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name){
    srand(static_cast<unsigned int>(time(0)));//Used For Random Number Generator
    char choice;
    
    cout<<endl;
    cout<<"To Flip The Card, Press Y.\n";
    cin>>choice;
    cout<<endl;
    
    validate(choice);//Validates User Input
    
    //Set Card Values And Suits
    pRank=rand()%13+1;
    pSuit=rand()%4+1;
    cRank=rand()%13+1;
    cSuit=rand()%4+1;
    
    cards(pRank, pSuit, cRank, cSuit, name);
}
//Function For Validating User Input
void validate(char choice){
    while(choice!='Y' && choice!='y'){
        cout<<"Invalid Entry, Please Press Y To Flip The Card.\n";
        cin>>choice;
        cout<<endl;
    }
}
//Outputs Card Value And Suit
void cards(int pRank, int pSuit, int cRank, int cSuit, vector<string> name){
    cout<<name[0]<<" Played ";
        switch(pRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(pSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
    
    cout<<name[1]<<" Played ";
        switch(cRank){
            case 1:cout<<"Ace ";break;
            case 2:cout<<"Two ";break;
            case 3:cout<<"Three ";break;
            case 4:cout<<"Four ";break;
            case 5:cout<<"Five ";break;
            case 6:cout<<"Six ";break;
            case 7:cout<<"Seven ";break;
            case 8:cout<<"Eight ";break;
            case 9:cout<<"Nine ";break;
            case 10:cout<<"Ten ";break;
            case 11:cout<<"Jack ";break;
            case 12:cout<<"Queen ";break;
            case 13:cout<<"King ";break;
        }
        switch(cSuit){
            case 1:cout<<"Of Clubs.\n";break;
            case 2:cout<<"Of Diamonds.\n";break;
            case 3:cout<<"Of Hearts.\n";break;
            case 4:cout<<"Of Spades.\n";break;
        }
        cout<<endl;
}
//Outputs If Player 1 Wins And Keeps Counters Updated
void whoWon(int pRank, int cRank, vector<string> name, int counter[], int a){
    if(pRank>cRank){
        counter[0]--;
        counter[1]--;
        a+=2;
        
        cout<<name[2]<<" This Round!\n"<<endl;
        //Counters
        counter[2]++;
        counter[3]+=0;
        counter[0]+=a;
        counter[1]+=0;
        cout<<name[0]<<" Has "<<counter[0]<<" Cards.\n";
        cout<<name[1]<<" Has "<<counter[1]<<" Cards.\n";
        cout<<endl;
    }
}
//Outputs If Player 2 Wins And Keeps Counters Updated
void lesser(int pRank, int cRank, vector<string> name, int counter[], int b){
    if(pRank<cRank){
        counter[0]--;
        counter[1]--;
        b+=2;
        
        cout<<name[3]<<" This Round!\n"<<endl;
        //Counters
        counter[2]+=0;
        counter[3]++;
        counter[0]+=0;
        counter[1]+=b;
        cout<<name[0]<<" Has "<<counter[0]<<" Cards.\n";
        cout<<name[1]<<" Has "<<counter[1]<<" Cards.\n";
        cout<<endl;
    }
}
//Functions For When Card Values Are Equal, And Has Each Possible Case
int equal(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a, int b){
    if(pRank==cRank){
        counter[0]--;
        counter[1]--;
        
        equal1(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        equal2(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        equal3(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        equal4(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        equal5(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        equal6(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        equal7(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        equal8(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        equal9(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        equal10(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        equal11(pRank, pSuit, cRank, cSuit, name, counter, a, b);
    }
}
//Equal Case And Keeps Counter Going 
int equal1(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[],int a, int b){
    if(pRank==cRank && counter[0]>4 && counter[1]>4){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;
        
        counter[0]-=3;
        counter[1]-=3;
        a+=8, b+=8;
        
        flipCard(pRank, pSuit, cRank, cSuit, name);
        whoWon(pRank, cRank, name, counter, a);
        lesser(pRank, cRank, name, counter, b);
        equal(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        return 0;
    }
}
//Equal Case And Keeps Counter Going 
int equal2(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a, int b){
    if(pRank==cRank && counter[0]==4){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;
        
        counter[0]-=3;
        counter[1]-=3;
        a+=8, b+=8;
        
        flipCard(pRank, pSuit, cRank, cSuit, name);
        whoWon(pRank, cRank, name, counter, a);
        lesser(pRank, cRank, name, counter, b);
        equal(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        return 0;
    }
}
//Equal Case And Keeps Counter Going 
int equal3(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a, int b){
    if(pRank==cRank && counter[1]==4){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        counter[0]-=3;
        counter[1]-=3;
        a+=8, b+=8;
        
        flipCard(pRank, pSuit, cRank, cSuit, name);
        whoWon(pRank, cRank, name, counter, a);
        lesser(pRank, cRank, name, counter, b);
        equal(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        return 0;
    }
}
//Equal Case And Keeps Counter Going 
int equal4(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a, int b){
    if(pRank==cRank && counter[0]==3){
        cout<<"It's War!\n";
        cout<<name[0]<<" Can Only Put 2 Cards Down, "<<name[1]<<" Will Put 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        counter[0]-=2;
        counter[1]-=3;
        a+=7, b+=7;
        
        flipCard(pRank, pSuit, cRank, cSuit, name);
        whoWon(pRank, cRank, name, counter, a);
        lesser(pRank, cRank, name, counter, b);
        equal(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        return 0;
    }
}
//Equal Case And Keeps Counter Going 
int equal5(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a , int b){
    if(pRank==cRank && counter[1]==3){
        cout<<"It's War!\n";
        cout<<name[1]<<" Can Only Put 2 Cards Down, "<<name[0]<<" Will Put 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        counter[0]-=3;
        counter[1]-=2;
        a+=7, b+=7;
       
        flipCard(pRank, pSuit, cRank, cSuit, name);
        whoWon(pRank, cRank, name, counter, a);
        lesser(pRank, cRank, name, counter, b);
        equal(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        return 0;
    }
}
//Equal Case And Keeps Counter Going 
int equal6(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a, int b){
    if(pRank==cRank && counter[0]==2){
        cout<<"It's War!\n";
        cout<<name[0]<<" Can Only Put 1 Card Down, "<<name[1]<<" Will Put 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        counter[0]-=1;
        counter[1]-=3;
        a+=6, b+=6;
        
        flipCard(pRank, pSuit, cRank, cSuit, name);
        whoWon(pRank, cRank, name, counter, a);
        lesser(pRank, cRank, name, counter, b);
        equal(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        return 0;
    }
}
//Equal Case And Keeps Counter Going 
int equal7(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a, int b){
    if(pRank==cRank && counter[1]==2){
        cout<<"It's War!\n";
        cout<<name[1]<<" Can Only Put 1 Card Down, "<<name[0]<<" Will Put 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        counter[0]-=3;
        counter[1]-=1;
        a+=6, b+=6;
        
        flipCard(pRank, pSuit, cRank, cSuit, name);
        whoWon(pRank, cRank, name, counter, a);
        lesser(pRank, cRank, name, counter, b);
        equal(pRank, pSuit, cRank, cSuit, name, counter, a, b);
        return 0;
    }
}
//Equal Case And Keeps Counter Going 
int equal8(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a, int b){
    if(pRank==cRank && counter[0]==1){
        cout<<"It's War!\n";
        cout<<name[0]<<" Cannot Put Any Cards Down, "<<name[1]<<" Will Put 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        counter[1]-=3;
        a+=5, b+=5;
        
        flipCard(pRank, pSuit, cRank, cSuit, name);
        whoWon(pRank, cRank, name, counter, a);
        lesser(pRank, cRank, name, counter, b);
        if(pRank==cRank){
            counter[0]--;
            flipCoin(name, counter, a, b, 0, 1);
            pRank=0, cRank=1;
        }
        return 0;
    }
}
//Equal Case And Keeps Counter Going 
int equal9(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a, int b){
    if(pRank==cRank && counter[1]==1){
        cout<<"It's War!\n";
        cout<<name[1]<<" Cannot Put Any Cards Down, "<<name[0]<<" Will Put 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        counter[0]-=3;
        a+=5, b+=5;
        
        flipCard(pRank, pSuit, cRank, cSuit, name);
        whoWon(pRank, cRank, name, counter, a);
        lesser(pRank, cRank, name, counter, b);
        if(pRank==cRank){
            counter[1]--;
            flipCoin(name, counter, a, b, 1, 0);
            pRank=0, cRank=1;
        }
        return 0;
    }
}
//Equal Case And Keeps Counter Going 
int equal10(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a, int b){
    if(pRank==cRank && counter[0]==0){
        cout<<"It's War!\n";
        cout<<name[0]<<" Cannot Put Any Cards Down, "<<name[1]<<" Will Put 3 Cards Face Down.\n";
        
        counter[1]-=3;
        a+=5, b+=5;
        
        flipCoin(name, counter, a, b, 0, 1);
    }
    return 0;
}
//Equal Case And Keeps Counter Going 
int equal11(int &pRank, int &pSuit, int &cRank, int &cSuit, vector<string> name, int counter[], int a, int b){
    if(pRank==cRank && counter[1]==0){
        cout<<"It's War!\n";
        cout<<name[1]<<" Cannot Put Any Cards Down, "<<name[0]<<" Will Put 3 Cards Face Down.\n";
        
        counter[0]-=3;
        a+=5, b+=5;
        
        flipCoin(name, counter, a, b, 1, 0);
    }
    return 0;
}
//Function To Flip Coin For When A Player Doesn't Have Enough Cards
void flipCoin(vector<string> name, int counter[], int a, int b, int c, int d){
    srand(static_cast<unsigned int>(time(0)));
    unsigned int coin;
    char flip;

    cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

    //Choose Heads Or Tails
    cin>>flip;
    cout<<endl;

    while(flip!='1' && flip!='0'){//Validate User Input
        cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
        cin>>flip;
        cout<<endl;
    }

    //Flip Coin
    coin=rand()%2;
    cout<<coin<<endl<<endl;
    
    //Output Who Wins And Keep Counters Going
    if((flip=='1' && coin==1) || (flip=='0' && coin==0)){
        cout<<name[2]<<" The War!\n"<<endl;
        counter[2]++;
        counter[3]+=0;
        counter[0]+=a;
        counter[1]+=0;
        cout<<name[c]<<" Has "<<counter[c]<<" Cards.\n";
        cout<<name[d]<<" Has "<<counter[d]<<" Cards.\n";
        cout<<endl;
    }
    else{
        cout<<name[3]<<" The War!\n"<<endl;
        counter[2]+=0;
        counter[3]++;
        counter[0]+=0;
        counter[1]+=b;
        cout<<name[c]<<" Has "<<counter[c]<<" Cards.\n";
        cout<<name[d]<<" Has "<<counter[d]<<" Cards.\n";
        cout<<endl;
    }
}
