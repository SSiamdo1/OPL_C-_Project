/************************************************************
 * Name:  Shahryar Siamdoust                                  *
 * Project:  OPL C++ Five Crowns Game            *
 * Class:  computer.cpp                      *
 * Date:  10/23/2019                           *
 ************************************************************/
//

#include "computer.h"








Computer::Computer()
{
    cout << "Comp Test" << endl;
    
}



void Computer::play(vector <Card> &drawPile, vector <Card> &discardPile)
{
    drawCard(drawPile,discardPile);
    
}



void Computer::drawCard(vector<Card> &drawPile, vector<Card> &discardPile)
{
    cout << (5/3.0) << endl;
    // Ask whether to draw from drawPile or discardPile
    int response = 0;
    do
    {
        // Print human turn and where to pick card from
        cout << "Computer Turn:\n";
        for (int i = 0; i < hand.size(); i++)
        {
            cout << hand[i].toString() << " " ;
            
            cout << endl;
            
        }
        cout << "0: draw pile \n1: discard pile \n2: go out ";
       
        cin >> response;
        
        // Validate Input
        if (response < 0 || response > 2)
        {
            
            cout << "Invalid Input\n";
            
        }
        // Ask for re-input
    }while(response < 0 || response > 2);
    
    // Draw from the correct pile and update it
    if(response==0)
    {
        // Add card from draw pile and remove from draw pile
        addCard(drawPile[0]);
        drawPile.erase(drawPile.begin());
        
       
       
        
    }
    if (response == 1)
    {
        // Add card from discard pile and remove from discard pile
        
       
    }
}

void Computer::discardCard(vector<Card> &discardPile)
{
    
  
    
}








/*
// Same as human.cpp but with the Computer instead
Computer::Computer(){
    
    
}


void Computer::Pick_Card(vector<Card>&Computer_Cards, vector<Card>&Draw_Pile, vector<Card> &Discard_Pile, int round_cards){
    
    int index = rand() % 2+1;
    int top_card = Discard_Pile.size();
    
    if (index = 1) {
    Computer_Cards.push_back(Draw_Pile[0]);
    Draw_Pile.erase(Draw_Pile.begin());
    }
    
    if (index = 2 && top_card > 0) {
        
        Computer_Cards.push_back(Discard_Pile[top_card-1]);
        Discard_Pile.erase(Discard_Pile.begin()+top_card-1);
        
    }
    
}


void Computer::Discard_Card(vector<Card>&Computer_Cards, vector<Card>&Discard_Pile, int round_cards) {
    
    srand(time(NULL));
    
    int index = rand() % Computer_Cards.size()+1;
    
    Discard_Pile.push_back(Computer_Cards[index-1]);
    
    Computer_Cards.erase(Computer_Cards.begin()+index-1);
    
    
}

bool Computer::Go_Out(vector<Card>&Computer_Cards, int round_cards) {
    
    string computer_cards[Computer_Cards.size()];
    round_cards-= 2;
    
    
    if (round_cards >= 1) {
        
        
        for (int i = 0; i < Computer_Cards.size(); i++)
        {
            
            computer_cards[i] = Computer_Cards[i].Get_Rank();
            
        }
        
        if (computer_cards[0] == computer_cards[1] && computer_cards[1] == computer_cards[2]) {
            
         
            return true;
        }
    }
    
  
    return false;
}
*/


