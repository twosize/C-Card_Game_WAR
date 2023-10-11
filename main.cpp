#include <iostream>
#include "war.hpp"

int main(int argc, char** argv) {
int countA = 0;
int countB = 0;
int round = 0;
int won = 0;
int n;
Deck myPile;
War playerA;
War playerB;

Card* cardA = NULL;

Card* cardB = NULL;

cout << "Welcome to the Game of War!" << endl;
cout << "Good Luck!" << endl;

for (int s = 0; s < 4; s++)
{
    for (int v = 0; v < 13; v++)
    {
        Card* newCard = new Card((Card::Value)v, (Card::Suit)s);
        myPile.AddCardToDeck(newCard);

}

}
    cout << endl << "Shuffling cards" << endl;
    myPile.Shuffle();
    cout << endl << "Each player's pile:" << endl;
    playerA.assignCards(myPile);
    playerB.assignCards(myPile);
    cout << endl << "Your pile: " << endl; cout << " " << endl;
    playerA.getToPlay().PrintCards();
    cout << endl << "Computer's pile: " << endl; cout << " " << endl;
    playerB.getToPlay().PrintCards();
    countA = playerA.getToPlay().GetNumCards();
    countB = playerB.getToPlay().GetNumCards();
    while (countA > 0 && countB > 0)
    {
        cout << endl;
        cardA = playerA.getCardFromToPlay();
        cardB = playerB.getCardFromToPlay();
        playerA.addCardToInPlay(cardA);
        playerB.addCardToInPlay(cardB);
        cout << "You play: "; cardA->printCard();
        cout << "Computer plays: "; cardB->printCard();
        if (cardA->getCardValue() > cardB->getCardValue())
        {
            cout << "You win all cards in play." << endl;
            n =playerA.getInPlay().GetNumCards();
            for (int i = 0; i < n; i++)
            {
                playerA.addCardToPlayed(playerA.getCardFromInPlay());
                playerA.addCardToPlayed(playerB.getCardFromInPlay());
            }
        }
        else if (cardA->getCardValue() < cardB->getCardValue())
        { cout << "Computer wins all cards in play." << endl;
            n = playerB.getInPlay().GetNumCards();
            for (int i = 0; i < n; i++)
            {
            playerB.addCardToPlayed(playerA.getCardFromInPlay());
            playerB.addCardToPlayed(playerB.getCardFromInPlay());
                
            }



}

else

{ cout << "You have tied." << endl; cout << "Each player will play three cards. The third card will be the card used." << endl;

}

        countA = playerA.getToPlay().GetNumCards();
        countB = playerB.getToPlay().GetNumCards();
        if (countA == 0) {
            n = playerA.getPlayed().GetNumCards();
            
        if (n > 0)
        { cout << endl << "You ran out of cards in your to play pile. Getting cards from the played pile." << endl;
            for (int i = 0; i < n; i++)
            { playerA.addCardToToPlay(playerA.getCardFromPlayed());
                
            }
            cout << "Shuffling your cards" << endl;
            playerA.getToPlay().Shuffle();
            countA = playerA.getToPlay().GetNumCards();
            
        }
            
        }
        if (countB == 0)
        {
            n = playerB.getPlayed().GetNumCards();
            
        if (n > 0)
        {
            cout << endl << "Computer ran out of cards in their to play pile. Getting cards from the played pile." << endl;
                for (int i = 0; i < n; i++)
                {
                    playerB.addCardToToPlay(playerB.getCardFromPlayed());
                    
                } cout << "Shuffling Computer's cards" << endl;
                playerB.getToPlay().Shuffle();
                countB = playerB.getToPlay().GetNumCards();
             
        }

}

if (countA > 0 && countB > 0) {
    cout << endl << "Player has " << playerA.getToPlay().GetNumCards() << " left in their to play pile and " << playerA.getPlayed().GetNumCards() << " remaining in their played pile." << endl; cout << "Computer has " << playerB.getToPlay().GetNumCards() << " in their to play pile and " << playerB.getPlayed().GetNumCards() << " in their played pile." << endl;

}

else if (countA == 0 && countB > 0)

{ cout << endl << "You have run out of cards." << endl; cout << "You have lost" << endl;

}

else if (countA > 0 && countB == 0)

{ cout << endl << "Computer has run out of cards." << endl; cout << "YOU HAVE WON THE GAME OF WAR!" << endl;

}

else if (countA == 0 && countB == 0)

{ cout << endl << "Player and Computer ran out of cards. Both have lost." << endl;

}

}

return 0;

}
