/* 
 * Author: Christopher Mathis
 * Created: February 5, 2020
 * Purpose: Project 1
 */

//System Libraries
#include <iostream> //Input/Output
#include <iomanip>  //Format
#include <ctime>    //Time
#include <cstdlib>  //Srand/Rand
#include <string>   //Strings
#include <fstream>  //File I/O
using namespace std;//Standard Name-Space Where Systm Libraries Exist

//Global Constants
const float CNVPERC=100;//Conversion From Decimal To Percent

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    ifstream in;                                //In From File
    ofstream out;                               //Out To File
    string msg;                                 //String To Use For Input From File
    bool play;                                  //Boolean To Start Or Exit Game 
    char choice;                                //player Input To Flip Card
    unsigned int pRank, pSuit, cRank, cSuit;    //Rank and Suit Of Cards
    unsigned int player, comp;                  //Counter For Amount of Cards Each Have
    unsigned int coin, flip;                    //Input Used For Continuing Game
    unsigned int nRounds, pWin, cWin;           //Counters For Statistics
    float pPerc, cPerc;                         //Percentage Of Rounds Won
    string cnt;                                 //Statement Variable Used With Ternary Operator
    
    //Initialize Variables
    player=comp=26;//Both Start With Half The Deck (26 Cards)
    nRounds=pWin=cWin=0;
    play=true;
    
    //Display Beginning Message Using File
    in.open("beg.dat");
    out.open("stat.dat");
    while(in>>msg){//While Loop To Output Everything From File
        cout<<msg<<" ";
    }
    
    //Boolean Test To Start Or Exit Game
    cout<<endl;
    cin>>choice;
    if(choice!='Y' && choice!='y'){
        play=false;
    }
    if(play==false){
        cout<<"Exiting Game.";
        return 0;
    }
    
    //Do-While Loop to Continue the Game
    do{
        //Random Generator To Get Card Value and Suits
        pRank=rand()%13+1;
        pSuit=rand()%4+1;
        cRank=rand()%13+1;
        cSuit=rand()%4+1;
        
        //Prompt To Flip Cards
        cout<<endl;
        cout<<"To Flip The Card, Press Y.\n";
        cin>>choice;
        cout<<endl;
        
        //While Loop to Validate input
        while(choice!='Y' && choice!='y'){
            cout<<"Invalid Entry, Please Press Y To Flip The Card.\n";
            cin>>choice;
            cout<<endl;
        }
        
        //Flip Cards, Reveal Rank As Well As Suit
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
        
        //See Who Gets the Points/Cards
        if(pRank>cRank){
            cout<<"Player Wins This Round!\n"<<endl;
            //Counters
            pWin++;
            player++;
            comp--;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        else if(pRank<cRank){
            cout<<"Computer Wins This Round!\n"<<endl;
            //Counters
            cWin++;
            player--;
            comp++;
            cout<<"Player Has "<<player<<" Cards.\n";
            cout<<"Computer Has "<<comp<<" Cards.\n";
            cout<<endl;
        }
        
        else if(pRank==cRank && player>4 && comp>4){
            cout<<"It's War!\n";
            cout<<"Both Place 3 Cards Face Down.\n";
            cout<<"Each Flip Another Card.\n";
            cout<<endl;

            //Prompt to Flip
            cout<<"To Flip The Card, Press Y.\n";
            cin>>choice;
            cout<<endl;

            //While Loop to Validate Input
            while(choice!='Y' && choice!='y'){
                cout<<"Invalid Entry, Please Press Y.\n";
                cin>>choice;
                cout<<endl;
            }
        
            //Random Generator To Get Card Values and Suits
            pRank=rand()%13+1;
            pSuit=rand()%4+1;
            cRank=rand()%13+1;
            cSuit=rand()%4+1;

            //Flip Cards, Reveal Rank As Well As Suit
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

            //See Who Gets The Points/Cards
            if(pRank>cRank){
                cout<<"Player Wins The War!\n"<<endl;
                //Counters
                pWin++;
                player+=5;
                comp-=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else if(pRank<cRank){
                cout<<"Computer Wins The War!\n"<<endl;
                //Counters
                cWin++;
                player-=5;
                comp+=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else{
                cout<<"It's War Again!\n";
                cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

                //Choose Heads or Tails
                cin>>flip;

                //While Loop to Validate Input
                while(flip!=1 && flip!=0){
                    cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
                    cin>>choice;
                    cout<<endl;
                }

                //Flip Coin
                coin=rand()%2;
                cout<<coin<<endl<<endl;

                if(flip==coin){
                    cout<<"Player Wins The War!\n"<<endl;
                    pWin++;
                    player+=5;
                    comp-=5;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
                else{
                    cout<<"Computer Wins The War!\n"<<endl;
                    cWin++;
                    player-=5;
                    comp+=5;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
            }
        }
        
        else if(pRank==cRank && player==4){
            cout<<"It's War!\n";
            cout<<"Both Place 3 Cards Face Down.\n";
            cout<<"Each Flip Another Card.\n";
            cout<<endl;

            //Prompt to Flip
            cout<<"To Flip The Card, Press Y.\n";
            cin>>choice;
            cout<<endl;

            //While Loop to Validate Input
            while(choice!='Y' && choice!='y'){
                cout<<"Invalid Entry, Please Press Y.\n";
                cin>>choice;
                cout<<endl;
            }

            //Random Generator To Get Card Values and Suits
            pRank=rand()%13+1;
            pSuit=rand()%4+1;
            cRank=rand()%13+1;
            cSuit=rand()%4+1;

            //Flip Cards, Reveal Rank As Well As Suit
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

            //See Who Gets The Points/Cards
            if(pRank>cRank){
                cout<<"Player Wins The War!\n"<<endl;
                //Counters
                pWin++;
                player+=5;
                comp-=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else if(pRank<cRank){
                cout<<"Computer Wins The War!\n"<<endl;
                //Counters
                cWin++;
                player-=4;
                comp+=4;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else{
                cout<<"It's War Again!\n";
                cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

                //Choose Heads or Tails
                cin>>flip;

                //While Loop to Validate Input
                while(flip!=1 && flip!=0){
                    cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
                    cin>>choice;
                    cout<<endl;
                }

                //Flip Coin
                coin=rand()%2;
                cout<<coin<<endl<<endl;

                if(flip==coin){
                    cout<<"Player Wins The War!\n"<<endl;
                    pWin++;
                    player+=5;
                    comp-=5;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
                else{
                    cout<<"Computer Wins The War!\n"<<endl;
                    cWin++;
                    player-=4;
                    comp+=4;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
            }
        }
        else if(pRank==cRank && comp==4){
            cout<<"It's War!\n";
            cout<<"Both Place 3 Cards Face Down.\n";
            cout<<"Each Flip Another Card.\n";
            cout<<endl;

            //Prompt to Flip
            cout<<"To Flip The Card, Press Y.\n";
            cin>>choice;
            cout<<endl;

            //While Loop to Validate Input
            while(choice!='Y' && choice!='y'){
                cout<<"Invalid Entry, Please Press Y.\n";
                cin>>choice;
                cout<<endl;
            }

            //Random Generator To Get Card Values and Suits
            pRank=rand()%13+1;
            pSuit=rand()%4+1;
            cRank=rand()%13+1;
            cSuit=rand()%4+1;

            //Flip Cards, Reveal Rank As Well As Suit
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

            //See Who Gets The Points/Cards
            if(pRank>cRank){
                cout<<"Player Wins The War!\n"<<endl;
                //Counters
                pWin++;
                player+=4;
                comp-=4;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else if(pRank<cRank){
                cout<<"Computer Wins The War!\n"<<endl;
                //Counters
                cWin++;
                player-=5;
                comp+=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else{
                cout<<"It's War Again!\n";
                cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

                //Choose Heads or Tails
                cin>>flip;

                //While Loop to Validate Input
                while(flip!=1 && flip!=0){
                    cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
                    cin>>choice;
                    cout<<endl;
                }

                //Flip Coin
                coin=rand()%2;
                cout<<coin<<endl<<endl;

                if(flip==coin){
                    cout<<"Player Wins The War!\n"<<endl;
                    pWin++;
                    player+=4;
                    comp-=4;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
                else{
                    cout<<"Computer Wins The War!\n"<<endl;
                    cWin++;
                    player-=5;
                    comp+=5;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
            }
        }
        
        else if(pRank==cRank && player==3){
            cout<<"It's War!\n";
            cout<<"Both Place 3 Cards Face Down.\n";
            cout<<"Each Flip Another Card.\n";
            cout<<endl;

            //Prompt to Flip
            cout<<"To Flip The Card, Press Y.\n";
            cin>>choice;
            cout<<endl;

            //While Loop to Validate Input
            while(choice!='Y' && choice!='y'){
                cout<<"Invalid Entry, Please Press Y.\n";
                cin>>choice;
                cout<<endl;
            }

            //Random Generator To Get Card Values and Suits
            pRank=rand()%13+1;
            pSuit=rand()%4+1;
            cRank=rand()%13+1;
            cSuit=rand()%4+1;

            //Flip Cards, Reveal Rank As Well As Suit
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

            //See Who Gets The Points/Cards
            if(pRank>cRank){
                cout<<"Player Wins The War!\n"<<endl;
                //Counters
                pWin++;
                player+=5;
                comp-=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else if(pRank<cRank){
                cout<<"Computer Wins The War!\n"<<endl;
                //Counters
                cWin++;
                player-=3;
                comp+=3;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else{
                cout<<"It's War Again!\n";
                cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

                //Choose Heads or Tails
                cin>>flip;

                //While Loop to Validate Input
                while(flip!=1 && flip!=0){
                    cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
                    cin>>choice;
                    cout<<endl;
                }

                //Flip Coin
                coin=rand()%2;
                cout<<coin<<endl<<endl;

                if(flip==coin){
                    cout<<"Player Wins The War!\n"<<endl;
                    pWin++;
                    player+=5;
                    comp-=5;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
                else{
                    cout<<"Computer Wins The War!\n"<<endl;
                    cWin++;
                    player-=3;
                    comp+=3;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
            }
        }
        
        else if(pRank==cRank && comp==3){
            cout<<"It's War!\n";
            cout<<"Both Place 3 Cards Face Down.\n";
            cout<<"Each Flip Another Card.\n";
            cout<<endl;

            //Prompt to Flip
            cout<<"To Flip The Card, Press Y.\n";
            cin>>choice;
            cout<<endl;

            //While Loop to Validate Input
            while(choice!='Y' && choice!='y'){
                cout<<"Invalid Entry, Please Press Y.\n";
                cin>>choice;
                cout<<endl;
            }

            //Random Generator To Get Card Values and Suits
            pRank=rand()%13+1;
            pSuit=rand()%4+1;
            cRank=rand()%13+1;
            cSuit=rand()%4+1;

            //Flip Cards, Reveal Rank As Well As Suit
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

            //See Who Gets The Points/Cards
            if(pRank>cRank){
                cout<<"Player Wins The War!\n"<<endl;
                //Counters
                pWin++;
                player+=3;
                comp-=3;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else if(pRank<cRank){
                cout<<"Computer Wins The War!\n"<<endl;
                //Counters
                cWin++;
                player-=5;
                comp+=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else{
                cout<<"It's War Again!\n";
                cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

                //Choose Heads or Tails
                cin>>flip;

                //While Loop to Validate Input
                while(flip!=1 && flip!=0){
                    cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
                    cin>>choice;
                    cout<<endl;
                }

                //Flip Coin
                coin=rand()%2;
                cout<<coin<<endl<<endl;

                if(flip==coin){
                    cout<<"Player Wins The War!\n"<<endl;
                    pWin++;
                    player+=3;
                    comp-=3;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
                else{
                    cout<<"Computer Wins The War!\n"<<endl;
                    cWin++;
                    player-=5;
                    comp+=5;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
            }
        }
        
        else if(pRank==cRank && player==2){
            cout<<"It's War!\n";
            cout<<"Both Place 3 Cards Face Down.\n";
            cout<<"Each Flip Another Card.\n";
            cout<<endl;

            //Prompt to Flip
            cout<<"To Flip The Card, Press Y.\n";
            cin>>choice;
            cout<<endl;

            //While Loop to Validate Input
            while(choice!='Y' && choice!='y'){
                cout<<"Invalid Entry, Please Press Y.\n";
                cin>>choice;
                cout<<endl;
            }

            //Random Generator To Get Card Values and Suits
            pRank=rand()%13+1;
            pSuit=rand()%4+1;
            cRank=rand()%13+1;
            cSuit=rand()%4+1;

            //Flip Cards, Reveal Rank As Well As Suit
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

            //See Who Gets The Points/Cards
            if(pRank>cRank){
                cout<<"Player Wins The War!\n"<<endl;
                //Counters
                pWin++;
                player+=5;
                comp-=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else if(pRank<cRank){
                cout<<"Computer Wins The War!\n"<<endl;
                //Counters
                cWin++;
                player-=2;
                comp+=2;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else{
                cout<<"It's War Again!\n";
                cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

                //Choose Heads or Tails
                cin>>flip;

                //While Loop to Validate Input
                while(flip!=1 && flip!=0){
                    cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
                    cin>>choice;
                    cout<<endl;
                }

                //Flip Coin
                coin=rand()%2;
                cout<<coin<<endl<<endl;

                if(flip==coin){
                    cout<<"Player Wins The War!\n"<<endl;
                    pWin++;
                    player+=5;
                    comp-=5;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
                else{
                    cout<<"Computer Wins The War!\n"<<endl;
                    cWin++;
                    player-=2;
                    comp+=2;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
            }
        }
        
        else if(pRank==cRank && comp==2){
            cout<<"It's War!\n";
            cout<<"Both Place 3 Cards Face Down.\n";
            cout<<"Each Flip Another Card.\n";
            cout<<endl;

            //Prompt to Flip
            cout<<"To Flip The Card, Press Y.\n";
            cin>>choice;
            cout<<endl;

            //While Loop to Validate Input
            while(choice!='Y' && choice!='y'){
                cout<<"Invalid Entry, Please Press Y.\n";
                cin>>choice;
                cout<<endl;
            }

            //Random Generator To Get Card Values and Suits
            pRank=rand()%13+1;
            pSuit=rand()%4+1;
            cRank=rand()%13+1;
            cSuit=rand()%4+1;

            //Flip Cards, Reveal Rank As Well As Suit
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

            //See Who Gets The Points/Cards
            if(pRank>cRank){
                cout<<"Player Wins The War!\n"<<endl;
                //Counters
                pWin++;
                player+=2;
                comp-=2;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else if(pRank<cRank){
                cout<<"Computer Wins The War!\n"<<endl;
                //Counters
                cWin++;
                player-=5;
                comp+=5;
                cout<<"Player Has "<<player<<" Cards.\n";
                cout<<"Computer Has "<<comp<<" Cards.\n";
                cout<<endl;
            }

            else{
                cout<<"It's War Again!\n";
                cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

                //Choose Heads or Tails
                cin>>flip;

                //While Loop to Validate Input
                while(flip!=1 && flip!=0){
                    cout<<"Invalid Entry, Please Choose Heads(1) Or Tails(0).\n";
                    cin>>choice;
                    cout<<endl;
                }

                //Flip Coin
                coin=rand()%2;
                cout<<coin<<endl<<endl;

                if(flip==coin){
                    cout<<"Player Wins The War!\n"<<endl;
                    pWin++;
                    player+=2;
                    comp-=2;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
                else{
                    cout<<"Computer Wins The War!\n"<<endl;
                    cWin++;
                    player-=5;
                    comp+=5;
                    cout<<"Player Has "<<player<<" Cards.\n";
                    cout<<"Computer Has "<<comp<<" Cards.\n";
                    cout<<endl;
                }
            }
        }
        
        else if(pRank==cRank && player==1){
            cout<<"It's War!\n";
            cout<<"You Cannot Put Any Cards Down, The Computer Will Put 3 Cards Face Down.\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

            //Choose Heads Or Tails
            cin>>flip;

            //While Loop To Validate Input
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
        
        else if(pRank==cRank && comp==1){
            cout<<"It's War!\n";
            cout<<"You Cannot Put Any Cards Down, The Computer Will Put 3 Cards Face Down.\n";
            cout<<"Flip A Coin, Choose Heads(1) Or Tails(0).\n";

            //Choose Heads Or Tails
            cin>>flip;

            //While Loop To Validate Input
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
        
        nRounds++;
        
        cnt=(player<52 && comp<52)?"Continue The Game, Flip A Card.\n":"Game Over.\n";
        cout<<cnt;
        cout<<endl;
        
    }while(player<52 && comp<52);
    
    if(player==52 || comp==0){
        cout<<endl<<"You Won :)\n"<<endl;
    }
    else if(player==0 || comp==52){
        cout<<endl<<"Computer Won :(\n"<<endl;
    }
    
    pPerc=(static_cast<float>(pWin)/nRounds)*CNVPERC;
    cPerc=(static_cast<float>(cWin)/nRounds)*CNVPERC;
    
    //Output Stats To Player In Program
    cout<<"Player Won "<<pWin<<" Of Rounds, Which Is Good For %"
            <<fixed<<setprecision(2)<<showpoint<<pPerc<<" Of The Rounds.\n";
    cout<<"Computer Won "<<cWin<<" Of Rounds, Which Is Good For %"
            <<fixed<<setprecision(2)<<showpoint<<cPerc<<" Of The Rounds.\n";
    
    //Output Stats To File
    out<<"Player Won "<<pWin<<" Of Rounds, Which Is Good For %"
            <<fixed<<setprecision(2)<<showpoint<<pPerc<<" Of The Rounds.\n";
    out<<"Computer Won "<<cWin<<" Of Rounds, Which Is Good For %"
            <<fixed<<setprecision(2)<<showpoint<<cPerc<<" Of The Rounds.\n";
    
    //Exit stage right!
    in.close();
    out.close();
    return 0;
}
