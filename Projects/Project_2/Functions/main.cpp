/* 
 * File: main.cpp
 * Author: Christopher Mathis
 * Created on February 10, 2020
 * Purpose: Functions For Repetitive Coding
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
int flipCard(int &, int &, int &, int &);
void validate(char);
void cards(int , int , int , int);
int whoWon(int , int , int , int , int &, int &, int &, int &);
int pGr8tr(int , int , int &, int &, int &, int, int);
int cGr8tr(int , int , int &, int &, int &, int, int);
int equal(int &, int &, int &, int &, int &, int&, int &, int &);
int equal1(int &, int &, int &, int &, int &, int&, int &, int &);
int equal2(int &, int &, int &, int &, int &, int&, int &, int &);
int equal3(int &, int &, int &, int &, int &, int&, int &, int &);
int equal4(int &, int &, int &, int &, int &, int&, int &, int &);
int equal5(int &, int &, int &, int &, int &, int&, int &, int &);
int equal6(int &, int &, int &, int &, int &, int&, int &, int &);
int equal7(int &, int &, int &, int &, int &, int&, int &, int &);
int equal8(int &, int &, int &, int &, int &, int&, int &, int &);
int equal9(int &, int &, int &, int &, int &, int&, int &, int &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int pWin, cWin, player, comp, pRank, pSuit, cRank, cSuit;
    
    //Initialize Variables
    pWin=cWin=pRank=pSuit=cRank=cSuit=0;
    player=comp=26;
    
    //Process or map Inputs to Outputs
    whoWon(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    
    //Display Outputs

    //Exit stage right!
    return 0;
}

int flipCard(int &pRank, int &pSuit, int &cRank, int &cSuit){
    srand(static_cast<unsigned int>(time(0)));
    char choice;
    
    cout<<endl;
    cout<<"To Flip The Card, Press Y.\n";
    cin>>choice;
    cout<<endl;
    
    validate(choice);
    
    pRank=rand()%13+1;
    pSuit=rand()%4+1;
    cRank=rand()%13+1;
    cSuit=rand()%4+1;
    
    cards(pRank, pSuit, cRank, cSuit);
}

void validate(char choice){
    while(choice!='Y' && choice!='y'){
        cout<<"Invalid Entry, Please Press Y To Flip The Card.\n";
        cin>>choice;
        cout<<endl;
    }
}

void cards(int pRank, int pSuit, int cRank, int cSuit){
    cout<<"Player Played ";
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
    
    cout<<"Computer Played ";
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

int whoWon(int pRank, int pSuit, int cRank, int cSuit, int &pWin, int &cWin, int &player, int &comp){
    flipCard(pRank, pSuit, cRank, cSuit);
    pGr8tr(pRank, cRank, pWin, player, comp, 1, 1);
    cGr8tr(pRank, cRank, cWin, player, comp, 1, 1);
    equal(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
}

int pGr8tr(int pRank, int cRank, int &pWin, int &player, int &comp, int a, int b){
    if(pRank>cRank){
            cout<<"Player Wins This Round!\n"<<endl;
            //Counters
            pWin++;
            player+=a;
            comp-b;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
    }
}

int cGr8tr(int pRank, int cRank, int &cWin, int &player, int &comp, int a, int b){
    if(pRank<cRank){
        cout<<"Computer Wins This Round!\n"<<endl;
        //Counters
        cWin++;
        player-=a;
        comp+=b;
        cout<<"Player Has "<<player<<" Cards.\n";
        cout<<"Computer Has "<<comp<<" Cards.\n";
        cout<<endl;
    }
}

int equal(int &pRank, int &pSuit, int &cRank, int &cSuit, int &pWin, int &cWin, int &player, int &comp){
    equal1(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    equal2(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    equal3(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    equal4(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    equal5(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    equal6(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    equal7(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    equal8(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    equal9(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
}

int equal1(int &pRank, int &pSuit, int &cRank, int &cSuit, int &pWin, int &cWin, int &player, int &comp){
    if(pRank==cRank && player>4 && comp>4){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        flipCard(pRank, pSuit, cRank, cSuit);
        pGr8tr(pRank, cRank, pWin, player, comp, 5, 5);
        cGr8tr(pRank, cRank, cWin, player, comp, 5, 5);
        equal(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    }
}

int equal2(int &pRank, int &pSuit, int &cRank, int &cSuit, int &pWin, int &cWin, int &player, int &comp){
    if(pRank==cRank && player==4){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        flipCard(pRank, pSuit, cRank, cSuit);
        pGr8tr(pRank, cRank, pWin, player, comp, 5, 5);
        cGr8tr(pRank, cRank, cWin, player, comp, 4, 4);
        equal(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    }
}

int equal3(int &pRank, int &pSuit, int &cRank, int &cSuit, int &pWin, int &cWin, int &player, int &comp){
    if(pRank==cRank && comp==4){
        cout<<"It's War!\n";
        cout<<"Both Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        flipCard(pRank, pSuit, cRank, cSuit);
        pGr8tr(pRank, cRank, pWin, player, comp, 4, 4);
        cGr8tr(pRank, cRank, cWin, player, comp, 5, 5);
        equal(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    }
}

int equal4(int &pRank, int &pSuit, int &cRank, int &cSuit, int &pWin, int &cWin, int &player, int &comp){
    if(pRank==cRank && player==3){
        cout<<"It's War!\n";
        cout<<"You Can Only Put 2 Cards Down, The Computer Will Put 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        flipCard(pRank, pSuit, cRank, cSuit);
        pGr8tr(pRank, cRank, pWin, player, comp, 5, 5);
        cGr8tr(pRank, cRank, cWin, player, comp, 3, 3);
        equal(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    }
}

int equal5(int &pRank, int &pSuit, int &cRank, int &cSuit, int &pWin, int &cWin, int &player, int &comp){
    if(pRank==cRank && comp==3){
        cout<<"It's War!\n";
        cout<<"The Computer Can Only Put 2 Cards Down, Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        flipCard(pRank, pSuit, cRank, cSuit);
        pGr8tr(pRank, cRank, pWin, player, comp, 3, 3);
        cGr8tr(pRank, cRank, cWin, player, comp, 5, 5);
        equal(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    }
}

int equal6(int &pRank, int &pSuit, int &cRank, int &cSuit, int &pWin, int &cWin, int &player, int &comp){
    if(pRank==cRank && player==2){
        cout<<"It's War!\n";
        cout<<"You Can Only Put 1 Card Down, The Computer Will Put 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        flipCard(pRank, pSuit, cRank, cSuit);
        pGr8tr(pRank, cRank, pWin, player, comp, 5, 5);
        cGr8tr(pRank, cRank, cWin, player, comp, 2, 2);
        equal(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    }
}

int equal7(int &pRank, int &pSuit, int &cRank, int &cSuit, int &pWin, int &cWin, int &player, int &comp){
    if(pRank==cRank && comp==2){
        cout<<"It's War!\n";
        cout<<"The Computer Can Only Put 1 Card Down, Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        flipCard(pRank, pSuit, cRank, cSuit);
        pGr8tr(pRank, cRank, pWin, player, comp, 2, 2);
        cGr8tr(pRank, cRank, cWin, player, comp, 5, 5);
        equal(pRank, pSuit, cRank, cSuit, pWin, cWin, player, comp);
    }
}

int equal8(int &pRank, int &pSuit, int &cRank, int &cSuit, int &pWin, int &cWin, int &player, int &comp){
    if(pRank==cRank && player==1){
        cout<<"It's War!\n";
        cout<<"You Cannot Put Any Cards Down, The Computer Will Put 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        flipCard(pRank, pSuit, cRank, cSuit);
        pGr8tr(pRank, cRank, pWin, player, comp, 5, 5);
        cGr8tr(pRank, cRank, cWin, player, comp, 1, 1);
        if(pRank==cRank){
            char choice;
            unsigned int coin, flip;
            
            cout<<"It's War!\n";
            cout<<"You Cannot Put Any Cards Down, The Computer Will Put 3 Cards Face Down.\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

            //Choose Heads Or Tails
            cin>>flip;
            
            while(flip!=1 && flip!=0){
                cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
                cin>>choice;
                cout<<endl;
            }
            
            //Flip Coin
            coin=rand()%2;
            cout<<coin<<endl<<endl;

            if(flip==coin){
                cout<<"Player Wins The War!\n";
                pWin++;
                player+=5;
                comp-=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
            else{
                cout<<"Computer Wins The War!\n";
                cWin++;
                player-=1;
                comp+=1;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
        }
    }
}

int equal9(int &pRank, int &pSuit, int &cRank, int &cSuit, int &pWin, int &cWin, int &player, int &comp){
    if(pRank==cRank && comp==1){
        cout<<"It's War!\n";
        cout<<"The Computer Cannot Put Any Cards Down, Place 3 Cards Face Down.\n";
        cout<<"Each Flip Another Card.\n";
        cout<<endl;

        flipCard(pRank, pSuit, cRank, cSuit);
        pGr8tr(pRank, cRank, pWin, player, comp, 1, 1);
        cGr8tr(pRank, cRank, cWin, player, comp, 5, 5);
        if(pRank==cRank){
            char choice;
            unsigned int coin, flip;
            
            cout<<"It's War!\n";
            cout<<"The Computer Cannot Put Any Cards Down, Place 3 Cards Face Down.\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

            //Choose Heads Or Tails
            cin>>flip;
            
            while(flip!=1 && flip!=0){
                cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
                cin>>choice;
                cout<<endl;
            }
            
            //Flip Coin
            coin=rand()%2;
            cout<<coin<<endl<<endl;

            if(flip==coin){
                cout<<"Player Wins The War!\n";
                pWin++;
                player+=1;
                comp-=1;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
            else{
                cout<<"Computer Wins The War!\n";
                cWin++;
                player-=5;
                comp+=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }
        }
    }
}