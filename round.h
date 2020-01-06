/************************************************************
 * Name:  Shahryar Siamdoust                                  *
 * Project:  OPL C++ Five Crowns Game            *
 * Class:  round.h           *
 * Date:  10/23/2019                           *
 ************************************************************/
//


#ifndef round_h
#define round_h
#include "card.h"
#include "deck.h"
#include "cardDealer.h"
#include "player.h"
#include "computer.h"
#include "human.h"
#include <vector>



class Round

{
    
    public:
    
    // *********************************************************
    // ******************** Class Constants ********************
    // *********************************************************

    
    // The number of players in this game
    const int TOTAL_PLAYERS = 2;
    
    Round();
    Round(int inRoundNumber);
    void play();


    private:
    
    // *********************************************************
    // ******************** Class Variables ********************
    // *********************************************************

    
    /** One line description of the variable */
    /** The number of this round, which determined the size of players' hands */
    int roundNumber;


    /** The array of players of this round */
    Player * playerList[2];

    /** The card dealer for this rond */
    CardDealer cardDealer;

    /** The draw pile for this round */
    vector<Card> drawPile;

    /** The discard pile for this round */
    vector<Card> discardPile;
    
    Human human;
    
    Computer computer;


};




/*
// Round class gets the round number and returns points
class Round {

public:
    Round();
    int Get_Round_Number();
    int Return_Player_Points(vector<Card>&Player_Cards);
    int Return_Computer_Points(vector<Card>&Computer_Cards);
    
private:
    int Round_Number;
    int Points;
    
};
*/
#endif /* round_h */

