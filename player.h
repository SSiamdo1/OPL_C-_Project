/************************************************************
 * Name:  Shahryar Siamdoust                                  *
 * Project:  OPL C++ Five Crowns Game            *
 * Class:  player.h                 *
 * Date:  10/23/2019                           *
 ************************************************************/
//

#ifndef player_h
#define player_h
#include "card.h"
#include "deck.h"
#include <vector>


class Player
{
    public:
    
        Player();
        int getScore();
        void addCard(Card newCard);
        virtual void play(vector <Card> &drawPile, vector <Card> &discardPile);
        void addToScore(int newScore);
        virtual void drawCard(vector<Card> &drawPile, vector<Card> &discardPile);
        virtual void discardCard(vector<Card> &discardPile);
        void clearCards();
        void printHand();
    
    
    protected:
    
        // *********************************************************
        // ******************** Class Variables ********************
        // *********************************************************
    
        /** One line description of the variable */
    
        /** The current score of the player */
        int score;
    
        /** The current hand of the player */
        vector<Card> hand;
    
        /** MutliDimensional Array to check for Books and Runs */
        //protected int[][] cards;
    
        /** Check if Book or Run is Found */
        //bool Book_Or_Run_Found = false;
    
    private:
    
    
};








/*
// Player class to inherit from
class Player{
public:
    Player();
    virtual void Pick_Card();
    virtual void Discard_Card();
    virtual bool Go_Out();
    
private:
    
    
};
*/

#endif /* player_h */
