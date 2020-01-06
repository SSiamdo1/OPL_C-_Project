/************************************************************
 * Name:  Shahryar Siamdoust                                *
 * Project:  OPL C++ Five Crowns Game                       *
 * Class:  card.cpp                                         *
 * Date:  1/1/2020                                          *
 ************************************************************/


#include "card.h"


// *********************************************************
// ******************** Constructor ************************
// *********************************************************



/* *********************************************************************
 Function Name: Card (Constructor)
 Purpose: Set the suit and face of a card and report any incorrect suit or face and to set the wild card automtically to false.
 Parameters:
 inSuit, a character. It is the suit of the card.
 inFace, a character. It is the face of the card
 Return Value: none
 Local Variables: none
 Algorithm:
 1) Set the suit and face and check if either is incorrect
 2) Set the wild card to false by default
 Assistance Received: Converted from Java program.
 ********************************************************************* */


Card::Card(char inSuit, int inFace)
{
    // These if statements will check if the card's suit or face is wrong and prints the inaccurate card
    if (!setSuit(inSuit))
        cout << "Card class reports incorrect suit " << inSuit;
    
    if (!setFace(inFace))
        cout << "Card class reports incorrect face " << inFace;
    
    // By default, the card is not a wild card.
    wildCard = false;
    
    
}

// *********************************************************
// ******************** Selectors **************************
// *********************************************************


/* *********************************************************************
 Function Name: getSuit
 Purpose: To return the suit of a card
 Parameters: none
 Return Value: The suit of a card, a character value
 Local Variables: none
 Algorithm:
 1) Return the suit of a card
 Assistance Received: Converted from Java program.
 ********************************************************************* */

char Card::getSuit()
{
      return suit;
};

/* *********************************************************************
 Function Name: getFace
 Purpose: To return the face of a card
 Parameters: none
 Return Value: The face of a card, an integer value
 Local Variables: none
 Algorithm:
 1) Return the face of a card
 Assistance Received: Converted from Java program.
 ********************************************************************* */

int Card::getFace()
{
     return face;
};

/* *********************************************************************
 Function Name: compareTo
 Purpose: To validate if a card is correct
 Parameters:
 A card object
 Return Value: -1 if the face is less than the face of the card object, 1 if greater than and 0 otherwise. All costants.
 Local Variables: none
 Algorithm:
 1) Return -1 if less than, 1 if greater than and 0 otherwise.
 Assistance Received: Converted from Java program.
 ********************************************************************* */

int Card::compareTo(Card right)
{
    if(face < right.face)
    {
        return -1;
    }
    if(face > right.face)
    {
        return 1;
    }
    
    return 0;
}

/* *********************************************************************
 Function Name: isWildCard
 Purpose: To check if a card is a wild card based on it's face value
 Parameters: none
 Return Value: If the card is a wild card, a boolean value.
 Local Variables: none
 Algorithm:
 1) Return if the card is a wild card or not.
 Assistance Received: Converted from Java program.
 ********************************************************************* */

bool Card::isWildCard()
{
    return wildCard;
}

// *********************************************************
// ******************** Mutators ***************************
// *********************************************************


/* *********************************************************************
 Function Name: setSuit
 Purpose: To set the suit of a card
 Parameters:
 inSuit, a character. It is the suit of a card
 Return Value: If the suit is valid or not, a boolean value.
 Local Variables:
 status, a boolean. It is to check if the suit is valid
 Algorithm:
 1) Set the suit to one of the five proper suits and set status to true.
 2) Set the suit to default otherwise and set status to false.
 3) Return status.
 Assistance Received: Converted from Java program.
 ********************************************************************* */


bool Card::setSuit(char inSuit)
{

    // Convert to uppercase just to be safe
    inSuit = toupper( inSuit );
    bool status = false;
    
    switch (inSuit )
    {
    // Suits can be (S)pades, (H)earts, (C)lubs, (D)iamonds, (T)ridents, and (O) Jokers.
        case 'S':
        case 'H':
        case 'C':
        case 'D':
        case 'T':
        case 'O':
            suit = inSuit;
    // Valid suit found so set to true.
            status = true;
    // Break out of statement as a valid suit has been found.
            break;
        default:
    // Set the suit to the default suit and declare the suit as invalid.
            suit=DEFAULT_SUIT;
            status= false;
    }
    // Return if the card's suit is valid or not.
    return status;
}

/* *********************************************************************
 Function Name: setFace
 Purpose: To set the face of a card
 Parameters:
 inFace, an integer. It is the face of a card
 Return Value: If the face is valid or not
 Local Variables:
 status, a boolean. It is to check if the face is valid, a boolean value.
 Algorithm:
 1) Set the face to one of the proper face values (3-13 and 14-16 for jokers) and set status to true.
 2) Set the face to default otherwise and set status to false.
 3) Return status.
 Assistance Received: Converted from Java program.
 ********************************************************************* */

// Set the Card Face and Validate
bool Card::setFace(int inFace)
{
    bool status = false;
    // Proper card Face value
    if (inFace >= 3 && inFace <=16)
    {
        face = inFace;
        // Valid face found so set to true.
        status=true;
    }
    else
    {
         // Set the face to the default face and declare the face as invalid.
        face = DEFAULT_FACE;
        status = false;
    }
     // Return if the card's face is valid or not.
    return status;
}

/* *********************************************************************
 Function Name: updateWildCards
 Purpose: To update a wild card
 Parameters:
 inFace, an integer. It is the face of a card which determines the wildcard.
 Return Value: none
 Local Variables:
 none
 Algorithm:
 1) Check if the face of a card is equal to the face of the wild card.
 2) Set the wild card of that face to true.
 Assistance Received: Converted from Java program.
 ********************************************************************* */

void Card::updateWildCards(int inFace)
{
    if(face==inFace)
    {
        wildCard=true;
    }
}

// *********************************************************
// ******************** Printing Methods *******************
// *********************************************************



/* *********************************************************************
 Function Name: toString
 Purpose: To return the face and suit of a card together and to convert the face of a card greater than 9 to the proper letter face and to seperate the three joker cards.
 Parameters: none
 Return Value: The face and suit of a card concatenated, A string value.
 Local Variables:
 none
 Algorithm:
 1) If face value 10-16 then convert to the appropriate letter face.
 2) Return the face and suit of the card.
 Assistance Received: Converted from Java program.
 ********************************************************************* */

string Card::toString()
{
    string stringSuit = to_string(suit);
    string stringFace = to_string(face);
    string ten = "X";
    ten += suit;
    string jack = "J";
    jack += suit;
    string queen = "Q";
    queen += suit;
    string king = "K";
    king += suit;
    string joker_one = "1";
    joker_one += suit;
    string joker_two = "2";
    joker_two += suit;
    string joker_three = "3";
    joker_three += suit;
    
    switch (face)
    {
        case 10:
            return ten;
        case 11:
            return jack;
        case 12:
            return queen;
        case 13:
            return king;
        case 14:
            return joker_one;
        case 15:
            return joker_two;
        case 16:
            return joker_three;
        default:
            return stringFace + suit;
    }
    
}


















/*
// Data Members should always be initalized to avoid potential problems.
Card::Card(){
    
    
    Card_Rank = "";
    Card_Suit = "";
    Card_Value = 0;
    Full_Card = "";
}

// Card Ranks used in Five Crowns
 void Card::Set_Rank(int Rank) {
    

    static const string Card_Ranks[] = {"3", "4",
        "5", "6", "7", "8", "9", "X", "J", "Q",
        "K", "O"};
    
     Card_Rank = Card_Ranks[Rank];

}

// Card Suits used in Five Crowns
void Card::Set_Suit(int Suit) {
    
    static const string Card_Suits[] = {
        "C", "D", "H", "S", "T", " " };
    Card_Suit = Card_Suits[Suit];
}

// Card Values for points
void Card:: Set_Value (int Value) {
    
    static const int Card_Values[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 50};
    
    Card_Value = Card_Values[Value];
    
}

// The entire card itself.
void Card:: Set_Full_Card () {
    

    Full_Card = Card_Rank + Card_Suit;
    
}

// Return The Rank, Suit and Card Values.
string Card::Get_Rank() {
    
    return Card_Rank;
    
}

string Card::Get_Suit() {
    
   // cout << Card_Suit << endl;
    return Card_Suit;
    
}

int Card::Get_Value() {
    
    return Card_Value;
}

string Card::Get_Full_Card() {
    
    //cout << Card_Rank + Card_Suit;
    return Card_Rank + Card_Suit;
}
 */


