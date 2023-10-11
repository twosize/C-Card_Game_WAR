#pragma once

#include "deck.hpp"

class War {

public:

War();

void assignCards(Deck& p); void addCardToToPlay(Card* c); void addCardToPlayed(Card* c); void addCardToInPlay(Card* c);

Card* getCardFromToPlay(); Card* getCardFromPlayed(); Card* getCardFromInPlay();

Deck getToPlay(); Deck getPlayed(); Deck getInPlay();

private:

Deck toPlay;
Deck played;
Deck inPlay;

};
