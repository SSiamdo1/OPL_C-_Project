/************************************************************
 * Name:  Shahryar Siamdoust                                *
 * Project:  OPL C++ Five Crowns Game                       *
 * Class:  card.h                                           *
 * Date:  1/1/2020                                          *
 ************************************************************/


#ifndef card_h
#define card_h

#pragma once
#include <iostream>
#include <string>
using namespace std;

// Card Class to create and display a card from a deck.


class Card
{

    public:
    
        // *********************************************************
        // ******************** Class Constants ********************
        // *********************************************************

        // The default suit of a card if needed
        char DEFAULT_SUIT='X';
        // The default face of a card if needed
        int DEFAULT_FACE=0;
    
        Card();
        Card(char inSuit, int inFace);
        char getSuit();
        int getFace();
        int compareTo(Card right);
        bool isWildCard();
        bool setSuit(char inSuit);
        bool setFace(int inFace);
        void updateWildCards(int inFace);
        std::string toString();
    
    
    private:
    
        // *********************************************************
        // ******************** Class Variables ********************
        // *********************************************************
    
        // Suit of a card
        char suit;
        // Face of a card
        int face;
        // The wild card
        bool wildCard;

    
};

#endif /* card_h */


/* *********************************************************************
 Function Name: compute
 Purpose: To calculate the average grade in a class
 Parameters:
 grades[], an array passed by value. It holds individual grades
 size, an integer. It refers to the number of students in the class
 Return Value: The average grade in the class, a real value
 Local Variables:
 temp[], an integer array used to sort the grades
 Algorithm:
 1) Add all the grades
 2) Divide the sum by the number of students in class to calculate the average
 Assistance Received: none
 ********************************************************************* */


/*public:
 Card();
 void Set_Rank(int Ranks);
 void Set_Suit(int Suit);
 void Set_Value(int Value);
 void Set_Full_Card();
 string Get_Rank();
 string Get_Suit();
 string Get_Full_Card();
 int Get_Value();
 
 
 private:
 int Card_Rank_Number;
 int Card_Suit_Number;
 string Card_Rank;
 string Card_Suit;
 string Full_Card;
 int Card_Value;
 */
