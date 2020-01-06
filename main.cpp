/************************************************************
 * Name:  Shahryar Siamdoust                                *
 * Project: OPL C++ Five Crowns Game                        *
 * Class:  main.cpp                                         *
 * Date:  1/1/2020                                          *
************************************************************/

// Include important stuff
#include <iostream>
#include <string>
//#include "includes.h"
#include "card.h"
#include "deck.h"
#include "round.h"
#include "player.h"
#include "computer.h"
#include "human.h"
#include "game.h"
using namespace std;


int main() {
    
    
    //Round round;
    
    // play the round
    //round.play();
    
    cout << (100/3.0) << endl;
    
    
   
  Game game;
    
game.play();
    
    
    return 0;
    
}


/*
    // randomize seed
    srand(time(NULL));
    // Create the Decks
    Deck first_deck;
    Deck second_deck;
    // Initalize important variables
    int round_cards = 0;
    bool coin = true;
    bool game = true;
    bool round = true;
    bool human_out = false;
    bool computer_out = false;
    int choice = 0;
    int comp_choice = 0;
    int player_points = 0;
    int computer_points = 0;
    int top_card = 0;
    // Get Round Number
    Round current_round;
    // Human and Computer players
    Human human;
    Computer computer;
    // Points
    Round points;
 
    // Vector to hold Cards
    vector<Card>Draw_Pile;
    vector<Card>Discard_Pile;
    vector<Card>Player_Cards;
    vector<Card>Computer_Cards;
    
    // Flip coin
    coin = rand() % 2;
    
    // Start the game
    while (game) {

    // Clear for New Round
        Draw_Pile.clear();
        Discard_Pile.clear();
        Player_Cards.clear();
        Computer_Cards.clear();
        
        // Create and Shuffle Cards
        first_deck.Create_Deck();
        first_deck.Shuffle_Cards();
        second_deck.Create_Deck();
        second_deck.Shuffle_Cards();
        second_deck.Shuffle_Cards();
        
        // Round number
        round_cards = current_round.Get_Round_Number();
        round_cards+=2;
    
        // 11 rounds per game
        if (round_cards > 13) {
            
            // Winner
            if (player_points > computer_points) {
                
                cout << "Computer Wins" << endl;
                
            }
            
            else {
                
                cout << "Player Wins" << endl;
            }
            // Exit
            cout << "Thanks for playing" << endl;
            return 0;
        }
        
        // Put deck in Draw Pile.
        for (int i = 0; i < DECK; i++) {
            
            Draw_Pile.push_back(first_deck.Return_Deck(i));
            
            Draw_Pile.push_back(second_deck.Return_Deck(i));
        }
        
        // Assign cards to Human and Computer
        
        for (int i = 0; i < round_cards; i++) {
            Player_Cards.push_back(Draw_Pile[i]);
            Computer_Cards.push_back(Draw_Pile[i+round_cards]);
            
        }
        
        // Remove the cards out of Draw Pile
        for (int i = 0; i < round_cards *2; i++) {
            
            Draw_Pile.erase(Draw_Pile.begin());
            
        }
        
        // Human goes first, otherwise Computer goes first.
        if (coin == 1) {
            
            // Validate choices
            choice = 0;
            while (choice <=0 || choice == 3 || choice > 4) {
                cout << "Pick Card from where or Go Out?: (1): Draw, (2): Discard, (3): Go Out" << endl;
                cout << "Your choice: ";
                cin >> choice;
                
                // Pick a card from Draw or Discard Pile
                if (choice == 1) {
                    
                    human.Pick_Card(Player_Cards, Draw_Pile, Discard_Pile, round_cards);
                    
                }
                
                // Discard a card
                if (choice == 2) {
                    
                    human.Discard_Card(Player_Cards, Discard_Pile, round_cards);
                    
                }
                // Go out if possible
                if (choice == 3) {
                    
                    human_out = human.Go_Out(Player_Cards, round_cards);
                    
                    // If human went out, give points to computer and start next round
                    if (human_out == true) {
                        
                        cout << computer_points << endl;
                        computer_points += points.Return_Computer_Points(Computer_Cards);
                        cout << computer_points << endl;
                        round = false;
                        break;
                        
                    }
                    
                }
            
            };
        }
        // Same for Computer
        comp_choice = 0;
        while (comp_choice <= 0 || comp_choice == 3) {
            srand(time(NULL));
            comp_choice = rand() % 3+1;
            
            if (comp_choice == 1) {
                
                computer.Pick_Card(Computer_Cards, Draw_Pile, Discard_Pile, round_cards);
                
            }
            
            if (comp_choice == 2) {
                
                computer.Discard_Card(Computer_Cards, Discard_Pile, round_cards);
                
            }
            
            if (comp_choice == 3) {
                
                computer_out = computer.Go_Out(Computer_Cards, round_cards);
                
                if (computer_out == true) {
                    
                    cout << player_points << endl;
                    player_points += points.Return_Player_Points(Player_Cards);
                    cout << player_points << endl;
                    
                }
                
            }
        };
        
        // Current Round
        round = true;
        while (round) {
        
        // Display Human Cards
        for (int i = 0; i < Player_Cards.size(); i++) {
            
            
            cout << "Human cards are: " << Player_Cards[i].Get_Full_Card();
            cout << endl;
            
        }
        
        // Display Computer Cards
        for (int i = 0; i < Computer_Cards.size(); i++) {
            
            
            cout << "Computer cards are: " << Computer_Cards[i].Get_Full_Card();
            cout << endl;
        }
        
        // Display Top of Discard Pile
            top_card = Discard_Pile.size();
            
            if (top_card > 0) {
                cout << "Discard Card: " << Discard_Pile[top_card-1].Get_Full_Card();
            cout << endl;
            }
            
        // Validate Choices
        choice = 0;
        while (choice <=0 || choice == 3 || choice > 4) {
        cout << "Pick Card from where or Go Out?: (1): Draw, (2): Discard, (3): Go Out" << endl;
        cout << "Your choice: ";
        cin >> choice;
        
        // Pick a card from Draw or Discard Pile
        if (choice == 1) {
            
            human.Pick_Card(Player_Cards, Draw_Pile, Discard_Pile, round_cards);
            
        }
        
            // Discard a card
        if (choice == 2) {
            
            human.Discard_Card(Player_Cards, Discard_Pile, round_cards);
            
        }
        // Go out if possible
        if (choice == 3) {
            
            human_out = human.Go_Out(Player_Cards, round_cards);
            
            // If human went out, give points to computer and start next round
            if (human_out == true) {
                
                cout << computer_points << endl;
                computer_points += points.Return_Computer_Points(Computer_Cards);
                cout << computer_points << endl;
                round = false;
                break;
                
            }
            
        }
        // Invalid choice
            if (choice <=0 || choice > 4) {
                
                cout << "Error, Invalid Choice" << endl;
                
            }
            
        };
        // Same procedure for Computer
            comp_choice = 0;
     while (comp_choice <= 0 || comp_choice == 3) {
        srand(time(NULL));
        comp_choice = rand() % 3+1;
         
        if (comp_choice == 1) {
            
            computer.Pick_Card(Computer_Cards, Draw_Pile, Discard_Pile, round_cards);
            
        }
        
        if (comp_choice == 2) {
            
            computer.Discard_Card(Computer_Cards, Discard_Pile, round_cards);
            
        }
        
        if (comp_choice == 3) {
            
            computer_out = computer.Go_Out(Computer_Cards, round_cards);
            
            if (computer_out == true) {
                
                cout << player_points << endl;
                player_points += points.Return_Player_Points(Player_Cards);
                cout << player_points << endl;
                
            }
            
        }
            
        
     };
        };
    };


    
   
}
 
 */


