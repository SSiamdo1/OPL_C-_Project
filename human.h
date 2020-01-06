/************************************************************
 * Name:  Shahryar Siamdoust                                  *
 * Project:  OPL C++ Five Crowns Game            *
 * Class:  human.h         *
 * Date:  10/23/2019                           *
 ************************************************************/
//
#ifndef human_h
#define human_h




#include "card.h"
#include "player.h"


class Human : public Player
{
    public:
    Human();
    //void addCard(Card newCard);
    void play(vector <Card> &drawPile, vector <Card> &discardPile);
    void drawCard(vector<Card> &drawPile, vector<Card> &discardPile);
    void discardCard(vector<Card> &discardPile);
    void clearCards();
    
    private:
    
    
};


/*
// Human class handles the human player
class Human : public Player {
public:
    Human();
    void Pick_Card(vector<Card>&Player_Cards,vector<Card>&Draw_Pile,vector<Card> &Discard_Pile, int round_cards);
    void Discard_Card(vector<Card>&Player_Cards, vector<Card>&Discard_Pile, int round_cards);
    bool Go_Out(vector<Card>&Player_Cards, int round_cards);
    
private:
  
};

*/
#endif /* human_h */

