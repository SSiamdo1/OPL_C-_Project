/************************************************************
 * Name:  Shahryar Siamdoust                                  *
 * Project:  OPL C++ Five Crowns Game            *
 * Class:  player.cpp                      *
 * Date:  10/23/2019                           *
 ************************************************************/
//

#include <stdio.h>
#include "player.h"
#include <iostream>
using namespace std;

Player::Player()
{
    
    // Set the score to 0
    score=0;
    
    // Allocate to hand
    
    vector<Card>hand;
}

int Player::getScore()
{
    
    return score;
    
}

void Player::addCard(Card newCard)
{
    
    
    hand.push_back(newCard);
    //Collections.sort(hand);
}

void Player::play(vector <Card> &drawPile, vector <Card> &discardPile)
{
    
    /*cout << "THIS WORKS ZERO" << endl;
    // Draw a card from Draw Pile or Discard Pile
    drawCard(drawPile,discardPile);
   cout << "THIS WORKS TWO" << endl;
    // Discard a card
    discardCard(discardPile);
    cout << "THIS WORKS FOUR" << endl;
    // Check books and runs
    
    // Check go out*/
    cout << "Player function" << endl;
    
}

void Player::addToScore(int newScore)
{
    
    score+=newScore;
}

// Get card and remove card from Draw Pile
void Player::drawCard(vector<Card> &drawPile, vector<Card> &discardPile)
{
    // Add the first card in draw pile
    
 /*  cout << "THIS WORKS ONE" << endl;
    addCard(drawPile.back());
    cout << "THIS WORKS ONE.TWO" << endl;
    drawPile.erase(drawPile.begin());
        cout << "THIS WORKS ONE.THREE" << endl;*/
    
    
}

// Get card and remove card from Discard Pile
void Player::discardCard(vector<Card> &discardPile)
{
    // Remove last card from hand to discard pile (random)
    // discardPile.insertElementAt(hand.lastElement(),0);
    // hand.remove(hand.size()-1);
       cout << "THIS WORKS THREE" << endl;
    // remove first card
    discardPile.push_back(hand[0]);
    hand.erase(hand.begin());
    cout << "THIS WORKS FIVE" << endl;
}


// Clear the Cards
void Player::clearCards()
{
    
    hand.clear();
    
}

void Player::printHand()
{
    string result = "";
    for(int index=0;index<(sizeof(hand) / sizeof(hand[0]));index++)
    {
        cout << &hand[index] << endl;
    }
  
}






/*
Player::Player(){
    
}

// Virtual functions to be used in inherited classes
void Player::Pick_Card() {
    
    
    
}

bool Player::Go_Out() {
    
    
    return true;
}

void Player::Discard_Card() {
    
    
    
}
*/
