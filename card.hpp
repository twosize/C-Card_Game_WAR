#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAXCARDS = 52;

class Card { public:

enum Value { two, three, four, five, six, seven, eight, nine, ten, Jack, Queen, King, Ace }; enum Suit { Clubs, Diamonds, Hearts, Spades };

Card(); Card(Value v, Suit s);

Value getCardValue(); Suit getCardSuit();

void setCardValue(Value v); void setCardSuit(Suit s); void printCard();

private:

Value cardValue; Suit cardSuit;

};
