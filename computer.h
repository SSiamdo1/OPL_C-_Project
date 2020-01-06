/************************************************************
 * Name:  Shahryar Siamdoust                                  *
 * Project:  OPL C++ Five Crowns Game            *
 * Class:  computer.h                 *
 * Date:  10/23/2019                           *
 ************************************************************/
//
#ifndef computer_h
#define computer_h

#include "includes.h"
#include "card.h"
#include "player.h"


class Computer : public Player
{
    public:
    Computer();
   // void addCard(Card newCard);
    void play(vector <Card> &drawPile, vector <Card> &discardPile);
    void drawCard(vector<Card> &drawPile, vector<Card> &discardPile);
    void discardCard(vector<Card> &discardPile);
    void clearCards();
    
private:
    
    
};

/*
// Computer handles the computer player
class Computer : public Player {
public:
    Computer();
    void Pick_Card(vector<Card>&Computer_Cards,vector<Card>&Draw_Pile, vector<Card> &Discard_Pile, int round_cards);
    void Discard_Card(vector<Card>&Computer_Cards, vector<Card>&Discard_Pile, int round_cards);
    bool Go_Out(vector<Card>&Computer_Cards, int round_cards);
    
    
private:
    
};

 
 */
#endif /* computer_h */
